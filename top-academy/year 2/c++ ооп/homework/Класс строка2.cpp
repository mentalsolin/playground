#include <iostream>

using namespace std;

class String {
private:
    char* str;
    int length;
public:
    String() {
        length = 80;
        str = new char[length + 1];
    }
    String(const char* str) {
        length = strlen(str);
        this->str = new char[length + 1];
        strcpy_s(this->str, length + 1, str);
    }
    void setstr(const char* str) {
        strcpy_s(this->str, length + 1, str);
    }
    char* getstr() {
        return str;
    }~String() {
        delete[] str;
    }
    String(const String& objStr) {
        this->str = new char[objStr.length + 1];
        this->length = objStr.length;
        strcpy_s(this->str, length + 1, objStr.str);
    }
};
int main() {
    String s1;
    cout << s1.getstr() << endl;
    s1.setstr("Hello");
    cout << s1.getstr() << endl;
    String s2("Hello2");
    cout << s2.getstr() << endl;
    String s3(s2);
    cout << s3.getstr() << endl;
}