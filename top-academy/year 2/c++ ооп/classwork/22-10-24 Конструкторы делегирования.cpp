#include <iostream>
using namespace std;

class Person {
private:
    bool alive;//0 - 1
    uint16_t age;// беззнаковокое целое число весит 2 байта
    string name;
    string hobbie;
public:
    //Конструктор принимает 3 параметра
    Person(bool alive, uint16_t age, string name, string hobbie) {
        this->alive = alive;
        this->age = age;
        this->name = name;
        this->hobbie = hobbie;
    }
    //Конструкторы с делегированием
    Person() :Person(0, 0, "", "") {}
    Person(bool alive) :Person(alive, 0, "", "") {}
    Person(bool alive, string name) :Person(alive, 0, name, "") {}
    Person(bool alive, uint16_t age, string name) :Person(alive, age, name, "no hobbie") {}
};

class Human {
private:
    bool alive;
    uint16_t age;
    char* name;
    string hobbie;
public:
    Human(bool alive, uint16_t age, const char* name, string hobbie) : alive{ alive },
        age{ age }, name{ name ? new char[strlen(name) + 1] : nullptr },
        hobbie{ hobbie }
    {
        if (name) {
            strcpy_s(this->name, strlen(name) + 1, name);
        }
    }
    ~Human() {
        delete[] name;
    }
};

int main() {
    Human man5(1, 23, "Djek", "Baseball");

    Person man1(1);
    Person man2(1, "Ruslan");
    Person man3(1, 10, "Roza");
    Person man4(0, 30, "Djek", "Basketball");
}