#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    //конструктор копирования
    Person(Person& person) {
        this->name = person.name;
        this->age = person.age;
    }
    void print() {
        cout << "Data: " << name << " " << age << endl;
    }
    /*r-value правостороняя ссылка  a = 5 */
    Person(Person&& person) {
        this->name = person.name;
        this->age = person.age;
        person.age = NULL;
        person.name = "";
    }
};
//Сделать класс Person c параметрами имя, возраст и 
// сделать конструктор копирования

class Point {
    int x;
    int y;
public:
    Point() {}
    Point(int x, int y) : x{ x }, y{ y } {}
    void print() {
        cout << "\nX: " << x << " Y: " << y << endl;
    }
    //перегрузка инкремента префиксный
    /*Синтаксис: тип_возвр_значения operator++(){} */
    void operator++() {
        this->x = ++x;
        this->y = y + 1;
    }
    //перегрузка инкремента постфиксный
    void operator++(int) {
        this->x = ++x;
        this->y = y + 1;
    }
    Point& operator++(int) {
        this->x = ++x;
        this->y = ++y;
        return *this;
    }
    //Перегрузка методом класса 
    void operator+(Point p1) {
        this->x = x + p1.x;
        this->y = y + p1.y;
        cout << "Summa: " << x + y << endl;
    }
    //Дружественная перегрузка
    friend void operator-(Point p1, Point p2) {
        Point temp(0, 0);
        temp.x = p1.x - p2.x;
        temp.y = p1.y - p2.y;
        cout << "\nX: " << temp.x << " Y: " << temp.y << endl;
    }
    friend Point operator-(Point& p1, Point& p2) {
        Point temp(0, 0);
        temp.x = p1.x - p2.x;
        temp.y = p1.y - p2.y;
        return temp;
    }
    friend Point operator(Point& temp) {
        this->x = temp.x;
        this->y = temp.y;
        return *this;
    }

};

int main()
{
    Point po1(2, 3);
    Point po2(4, 5);
    po1.print();
    //++po1; //увеличиваем координаты точек на 1 //вызов перегрузки
    //po1.operator++();//вызов перегрузки
    po1.print();
    //po1++;
    po1.print();
    //--po2;
    //po2--;
    Point po3(30, 80);
    Point po4(40, 50);
    //po3 + po4; //перегрузка может содержать команду cout 

    //po3 - po4;//перегрузка будет выводить x и y
    Point po5(0, 0);



    //вызов конструктора копирования
    Person p1("Petrov", 14);
    p1.print();

    Person p2(p1);
    p2.print();
    p1.print();
    p1.print();
    //вызов конструктора перемещения 
    Person p3 = move(p2);
    p3.print();
    p2.print();
}
