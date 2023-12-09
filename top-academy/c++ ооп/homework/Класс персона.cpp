#include <iostream>
#include <algorithm>
#include <ostream>
using namespace std;

class Person {
    char* pname;
    int lenght;
public:
    Person() : pname{ nullptr }, lenght{ 0 } {};
    Person(const char* pname) {
        lenght = strlen(pname);
        this->pname = new char[lenght + 1];
        strcpy_s(this->pname, lenght + 1, pname);
    }

    void print() {
        cout << pname;
    }

    ~Person() {
        delete[]pname;
    }

    Person(const Person& object) {
        this->lenght = object.lenght;
        this->pname = new char[object.lenght + 1];
        strcpy_s(this->pname, lenght + 1, object.pname);
    }
};

int main()
{
    Person a1("Dora");
    a1.print();
    Person a2(a1);
    a2.print();
}