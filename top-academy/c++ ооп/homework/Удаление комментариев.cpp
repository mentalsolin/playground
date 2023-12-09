#include <iostream>
using namespace std;

string removeComments(string prgm)
{
    int n = prgm.length();
    string res;

    bool s_cmt = false;
    bool m_cmt = false;


    for (int i = 0; i < n; i++) // пока i(0) меньше n(размер всего текста)
    {
        if (s_cmt == true && prgm[i] == '\n') // если символ в тексте равен "\n" тогда значение s_cmt = true
            s_cmt = false;

        else if (m_cmt == true && prgm[i] == '*' && prgm[i + 1] == '/') // если символ равен "*", то прибавляется "/". значение m_cmt true
            m_cmt = false, i++;

        else if (s_cmt || m_cmt) // если одно из значений true тогда продолжается
            continue;

        else if (prgm[i] == '/' && prgm[i + 1] == '/') // если строчка равна "/" прибавляется "/"
            s_cmt = true, i++;
        else if (prgm[i] == '/' && prgm[i + 1] == '*') // если строчка равна "/" то прибавляется "*"
            m_cmt = true, i++;

        else res += prgm[i];
    }
    return res;
}

int main()
{
    string prgm = "   /* Test program */ \n"
        "   int main()  \n"
        "   {           \n"
        "      // variable declaration \n"
        "      int a, b, c;    \n"
        "      /* This is a test  \n"
        "          multiline     \n"
        "          comment for   \n"
        "          testing */      \n"
        "      a = b + c;       \n"
        "   }           \n";
    cout << "Given Program \n";
    cout << prgm << endl;
    cout << " Modified Program ";
    cout << removeComments(prgm);
    return 0;
}