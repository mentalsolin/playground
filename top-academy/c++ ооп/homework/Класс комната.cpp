#include <iostream>
using namespace std;

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
    Room r1("Room 1", 42, true);
    Apartment a1(1, r1);
    a1.render();
}