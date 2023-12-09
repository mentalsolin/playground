#include <iostream>
using namespace std;

class Drob {
    unsigned short num;
    unsigned short denum;
public:

    Drob() {};
    Drob(unsigned short num, unsigned short denum) {
        this->num = num;
        this->denum = denum;
    }

    unsigned short getNum() {
        return num;
    }

    unsigned short getDenum() {
        return denum;
    }

    friend void operator+(Drob a, Drob b) {
        cout << a.num << "   " << b.num << "   " << a.num + b.num << endl;
        cout << "- " << "+" << " - = -" << endl;
        cout << a.denum << "   " << b.denum << "   " << a.denum << endl;
    }

    friend void operator-(Drob a, Drob b) {
        cout << a.num << "   " << b.num << "   " << a.num - b.num << endl;
        cout << "- " << "-" << " - = -" << endl;
        cout << a.denum << "   " << b.denum << "   " << a.denum << endl;
    }
};

int main()
{
    Drob d1(2, 4);

    cout << d1.getNum();
    cout << endl;
    cout << d1.getDenum();
}
