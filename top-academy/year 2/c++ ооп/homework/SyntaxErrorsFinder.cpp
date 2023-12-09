#include <iostream>
#include <stack>
typedef unsigned int uint;
bool is_beg_end(int a, int b);
bool is_expr(const char* s, uint& pos);

using namespace std;

int main() {
    uint p;
    char s1[] = "";
    cout << "Enter code: ";
    cin >> s1;
    if (is_expr(s1, p))
        cout << "Good." << endl;
    else
        cout << "Error, strpos: " << s1 + p << endl;
}

struct binfo {
    int  ch;
    uint pos;
    binfo(int c, uint p) :ch(c), pos(p) {}
};

bool is_expr(const char* s, uint& p) {
    const char* t = s;
    stack<binfo> st;

    for (; *s; ++s) {
        switch (*s) {
        case '(':
        case '{':
        case '[':
            st.push(binfo(*s, static_cast<uint>(s - t)));
            break;
        case ')':
        case '}':
        case ']':
            if (st.empty() || !is_beg_end(st.top().ch, *s)) {
                p = static_cast<uint>(s - t);
                return false;
            }
            st.pop();
            break;
        }
    }

    bool ret = st.empty();
    for (; !st.empty(); st.pop())
        p = st.top().pos;
    return !*s && ret;
}

bool is_beg_end(int a, int b) {
    return (a == '(' && b == ')') ||
        (a == '{' && b == '}') ||
        (a == '[' && b == ']');
}