#include <iostream>
using namespace std;

class Date {
    unsigned short day;
    unsigned short month;
    unsigned short year;
public:
    Date() :day{ 1 }, month{ 1 }, year{ 2000 } {}
    Date(unsigned short pday, unsigned short pmonth, unsigned short pyear) {
        day = pday;
        month = pmonth;
        year = pyear;
    }
    unsigned short getday() {
        return day;
    }
    unsigned short getmonth() {
        return month;
    }
    unsigned short getyear() {
        return year;
    }
};

class Person {
    string FIO;
    unsigned short age;
    Date hbdate;
public:
    Person() :FIO{ "John Doe" }, age{ 0 }, hbdate{ 1,1,2007 } {}
    Person(string FIO, unsigned short age, Date hbdate) {
        this->FIO = FIO;
        this->age = age;
        this->hbdate = hbdate;
    }

    void render() {
        cout << FIO << endl;
        cout << age << endl;
        cout << hbdate.getmonth() << "/" << hbdate.getday() << "/" << hbdate.getyear() << endl;
    }
};

class Room {
    string name;
    unsigned short square;
    bool walls;
public:
    Room() :name{ "Default name" }, square{ 0 }, walls{ false } {}
    Room(string pname, unsigned short psquare, bool pwalls) {
        name = pname;
        square = psquare;
        walls = pwalls;
    }
    string getname() {
        return name;
    }
    unsigned short getsquare() {
        return square;
    }
    bool getwalls() {
        return walls;
    }
};

class Apartment {
    unsigned short count;
    Room aparts;
public:
    Apartment() :count{ 1 }, aparts{ "Room 1",1,true } {}
    Apartment(unsigned short count, Room aparts) {
        this->count = count;
        this->aparts = aparts;
    }

    void render() {
        cout << count << endl;
        cout << aparts.getname() << ", " << aparts.getsquare() << ", " << aparts.getwalls();
    }
};

int main()
{
    Date d(11, 30, 1999);
    Person p1("Dora", 22, d);
    p1.render();
    cout << endl;

    Room r1("Room 1", 42, true);
    Apartment a1(1, r1);
    a1.render();

}