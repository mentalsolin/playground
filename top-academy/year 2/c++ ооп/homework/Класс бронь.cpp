#include <iostream>
using namespace std;

class Reserve {
    int lenght;
    int width;
public:
    Reserve() {};
    Reserve(int lenght, int width) {
        this->lenght = lenght;
        this->width = width;
    };
    void operator>(Reserve r1) {
        int square1 = lenght * width;
        int square2 = r1.lenght * r1.width;
        if (square1 > square2) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
    }
    void operator<(Reserve r2) {
        int square1 = lenght * width;
        int square2 = r2.lenght * r2.width;
        if (square1 < square2) {
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
        }
    }
};

int main()
{
    Reserve r1(30, 60);
    Reserve r2(30, 90);

    r2 > r2;
    r1 < r2;
}