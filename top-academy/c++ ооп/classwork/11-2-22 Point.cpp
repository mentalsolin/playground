#include <iostream>
using namespace std;

//class Person {
//    string name;
//    unsigned short age;
//public:
//    Person(string pname, unsigned short page) {
//        name = pname;
//        age = page;
//    }
//    Person(const Person& person) {
//        this->name = person.name;
//        this->age = person.age;
//    }
//
//    void print() {
//        cout << "name: " << name << " age: " << age;
//    }
//
//
//    Person(Person& person) {
//        this->name = person.name;
//        this->age = person.age;
//        person.name = "";
//        person.age = NULL;
//    }
//};

class Point {
    int x;
    int y;
public:
    Point() {}
    Point(int x, int y) : x{ x }, y{ y } {};
    void print() {
        cout << "\nX: " << x << " Y: " << y << endl;
    }
    // перегрузка

    void operator++(int) {
        this->x = ++x;
        this->y = y + 1;
    }
    void operator--(int) {
        this->x = --x;
        this->y = y - 1;
    }


};

int main()
{
    //Person p1("Dora", 22);
    //Person p2(p1);

    //p1.print();
    //cout << endl;
    //p2.print();

    Point po1(2, 3);
    Point po2(4, 5);

    po1.print();
    po1++;
    po1.print();
    po1--;
    po1.print();
}