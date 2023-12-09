#include <iostream>
using namespace std;

class Animal { // создаем базовый класс животные

public:
    void eat() { // функция базового класса
        cout << "I can eat!" << endl;
    }

    void sleep() { // функция базового класса
        cout << "I can sleep!" << endl;
    }
};

class Dog : public Animal { // создаем подкласс, в классе животные

public:
    void bark() { // создаем функцию подкласса, которая доступна только в подклассе собака
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    Dog dog1; // создаем 

    dog1.eat(); // функция базового класса
    dog1.sleep(); // функция базового класса
    dog1.bark(); // функция подкласса собака
}