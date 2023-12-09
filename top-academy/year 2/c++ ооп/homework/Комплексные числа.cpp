#include <iostream>

using namespace std;

class Complex {
    int a;
    int b;
public:

    Complex(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void operator==(Complex& complex) {
        if (complex.a == a  && complex.b == b) {
            cout << complex.a << " == " << a << endl;
            cout << complex.b << " == " << b;
        }
        else {
            cout << complex.a << " != " << a << endl;
            cout << complex.b << " != " << b;
        }
        cout << endl;
        cout << endl;
    }

};

int main()
{
    Complex c1{ 2, 5 };
    Complex c2{ 2, 5 };
    Complex c3{ 3, 9 };

    c1 == c2;
    c1 == c3;
}