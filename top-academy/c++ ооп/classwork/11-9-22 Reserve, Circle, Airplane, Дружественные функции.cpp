#include <iostream>
using namespace std;

//class Reserve {
//    int lenght;
//    int width;
//public:
//    Reserve() {};
//    Reserve(int lenght, int width) {
//        this->lenght = lenght;
//        this->width = width;
//    };
    //bool operator>(Reserve r1) {
    //    int square1 = lenght * width;
    //    int square2 = r1.lenght * r1.width;
    //    if (square1 > square2) {
    //        return 1;
    //    }
    //    else {
    //        return 0;
    //    }
    //}
    //bool operator<(Reserve r2) {
    //    //int square1 = lenght * width;
    //    //int square2 = r2.lenght * r2.width;
    //    //if (square1 > square2) {
    //    //    return 1;
    //    //}
    //    //else {
    //    //    return 0;
    //    //}

    //    return length * width < r2.lenght* r2.width ? 1 : 0;
    //}





    //void operator()(int num) {
    //    lenght -= num;
    //    width -= num;
    //    cout << "Lenght num: " << lenght << " width num: " << width << endl;
    //}
//};





//class Circle {
//    int lenght;
//public:
//    Circle() {};
//    Circle(int lenght) {
//        this->lenght = lenght;
//    };
//
//    friend void operator==(Circle c1, Circle c2) {
//        c1.lenght == c2.lenght ? cout << "c1 (" << c1.lenght << ") == c2 (" << c2.lenght << ")" : cout << "c1 (" << c1.lenght << ") != c2 (" << c2.lenght << ")";
//    }
//
//    friend void operator>(Circle c1, Circle c2) {
//        c1.lenght > c2.lenght ? cout << "c1 (" << c1.lenght << ") > c2 (" << c2.lenght << ")" : cout << "c1 (" << c1.lenght << ") < c2 (" << c2.lenght << ")";
//    }
//
//    friend void operator+=(Circle c1, int temp) {
//        cin >> temp;
//        cout << c1.lenght + temp;
//    }
//
//    friend void operator-=(Circle c1, int temp) {
//        cin >> temp;
//        cout << c1.lenght - temp;
//    }
//
//
//
//
//
//};
//
//
//class Airplane {
//    string type;
//    int pas;
//public:
//
//    Airplane() {};
//    Airplane(string type, int pas) {
//        this->type = type;
//        this->pas = pas;
//    };
//
//    int getPas() {
//        return pas;
//    }
//
//    string getType() {
//        return type;
//    }
//
//    friend void operator==(Airplane type1, Airplane type2) {
//        type1.type == type2.type ? cout << type1.type << " == " << type2.type : cout << type1.type << " != " << type2.type;
//    }
//
//    int operator++() {
//        int temp;
//        cout << "Current pas = " << pas << "\nEnter new value +: ";
//        cin >> temp;
//        return pas = pas + temp;
//    }
//
//    int operator--() {
//        int temp;
//        cout << "Current pas = " << pas << "\nEnter new value -: ";
//        cin >> temp;
//        return pas = pas - temp;
//    }
//
//};





class Student {
    string name;
    string data;
public:
    Student() {};
    Student(Student&& s) {
        name = s.name;
        data = s.data;
        s.name = "no";
        s.data = "no";
    };
    void cons() {
        cout << endl << data << endl << name << endl;
    }
};


int main()
{

    Student s1{ "ivan", "01.01.1970" };
    s1.cons();
    Student s2 = move(s1);
    s2.cons();
    s1.cons();








    //Airplane air1("airbus", 350);
    //Airplane air2("rynaer", 250);
    //Airplane air3("rynaer", 250);

    //air2 == air1;

    //cout << air1.getPas();
    //cout << endl;
    //++air1;

    //cout << endl;
    //cout << air1.getPas();
    //cout << endl;
    //--air2;

    //cout << endl;
    //cout << air2.getPas();




    //Circle c1(40);
    //Circle c2(40);

    //Circle c3(80);
    //Circle c4(40);

    //c1 == c2;
    //cout << endl;
    //c3 > c4;

    //c1 += 7;
    //c1 -= 7;











    //Reserve r1(20, 30);
    //Reserve r2(40, 50);
    //bool temp = r1 > r2;
    //temp == 1 > cout << "r1 > r2" : cout "r1 < r2";
    //bool temp2 = r1 > r2;
    //temp2 == 1 < cout << "r1 > r2" : cout "r1 < r2";
}