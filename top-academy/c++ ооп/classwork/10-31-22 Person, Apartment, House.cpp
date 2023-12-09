#include <iostream>
using namespace std;

class Person {
    string FIO;
public:
    Person() {}
    Person(string FIO) {
        this->FIO = FIO;
    }

    string getfio() {
        return FIO;
    }
};

class Apartment {
    Person* listP;
    unsigned short number;
    unsigned short floor;
public:
    Apartment(Person* listP, unsigned short number, unsigned short floor) {
        listP = new Person[2];
        for (size_t i = 0; i < 2; i++)
        {
            this->listP[i] = listP[i];
        }
        this->number = number;
        this->floor = floor;

        for (size_t i = 0; i < 2; i++)
        {
            cout << this->listP[i].getfio();
        }
        cout << number << endl;
        cout << floor;
    }
};

class House {
    string street;
    Apartment* listA;
    unsigned short temp;
public:
    House(string street, Apartment* listA, unsigned short temp) {
        this->street = street;
        this->listA = listA;
        this->temp = temp;
    }
};

int main()
{
    Person p1("Human 1");
    Person p2("Human 2");

    Person masP[] = { p1, p2 };
    Apartment a1 (masP, 4, 2);

    //a1.print();
}