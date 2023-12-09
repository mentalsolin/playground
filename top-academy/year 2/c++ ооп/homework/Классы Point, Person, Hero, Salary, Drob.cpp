#include <iostream>
#include <algorithm>
#include <ostream>
using namespace std;

class Point {
   int x;
   int y;
   int* ptr;
public:
   Point() {};
   Point(int x, int y) : x{ x }, y{ y } {
       ptr = new int[10];
       for (size_t i = 0; i < 10; i++)
       {
           ptr[i] = i + 1;
       }
   }

   void print() {
       cout << x << ", " << y;
   }

   ~Point() {
       delete[]ptr;
   }

   Point(const Point& p1) {
       x = p1.x;
       y = p1.y;
       ptr = new int[10];
       for (size_t i = 0; i < 10; i++)
       {
           ptr[i] = p1.ptr[i];
       }
   }
};

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

class Hero {
    int maxpower;
    int maxagility;
public:
    Hero(int maxpower, int maxagility) {
        this->maxpower = maxpower;
        this->maxagility = maxagility;
    };

    void print()const {
        cout << maxpower << maxagility << endl;
    }



};

class Salary {
    int summa;
    int day;
public:
    Salary() {};
    Salary(int summa, int day) {
        this->summa = summa;
        this->day = day;
    }
    friend int operator+(Salary fireman, Salary firemanswife) {
       int temp = fireman.summa + firemanswife.summa;
       cout << temp << endl;
       return temp;
    }

    friend int operator-(Salary fireman, Salary firemanswife) {
       if (fireman.summa > firemanswife.summa) {
           int temp = fireman.summa - firemanswife.summa;
           cout << temp << endl;
           return temp;
       }
       else {
           int temp = firemanswife.summa - fireman.summa;
           cout << temp << endl;
           return temp;
       }
    }

    friend void operator==(Salary fireman, Salary firemanswife) {
       if (fireman.summa == firemanswife.summa) {
           cout << 1;
       }
       else {
           cout << 0;
       }
    }

    int operator+(Salary fireman) {
       int temp = summa + fireman.summa;
       cout << temp << endl;
       return temp;
    };

    int operator-(Salary fireman) {
       if (summa > fireman.summa) {
           int temp = summa - fireman.summa;
           cout << temp << endl;
           return temp;
       }
       else {
           int temp = fireman.summa - summa;
           cout << temp << endl;
           return temp;
       }
    };

    void operator==(Salary fireman) {
       if (summa == fireman.summa) {
           cout << 1;
       }
       else {
           cout << 0;
       }
    };

    friend ostream& operator << (ostream& output, const Salary& fireman) {
       output << "Salary sum: " << fireman.summa << " Day: " << fireman.day;
       return output;
    }

    friend istream& operator >> (istream& input, Salary& firemanswife) {
       cout << "Enter new salary: ";
       input >> firemanswife.summa;
       return input;
    }
};

class Drob {
    unsigned short num;
    unsigned short denum;
public:

    Drob() {};
    Drob(unsigned short num, unsigned short denum) {
        this->num = num;
        this->denum = denum;
    }


    friend void operator+(Drob a, Drob b) {
        cout << a.num << "   " << b.num << "   " << a.num + b.num << endl;
        cout << "- " << "+" << " - = -" << endl;
        cout << a.denum << "   " << b.denum << "   " << a.denum << endl;
    }

    friend void operator-(Drob a, Drob b) {
        cout << a.num << "   " << b.num << "   " << a.num - b.num << endl;
        cout << "- " << "-" << " - = -" << endl;
        cout << a.denum << "   " << b.denum << "   " << a.denum << endl;
    }
};

int main()
{
    Drob d1(7, 3);
    Drob d2(7, 3);

    d1 + d2;
    d1 - d2;

    Salary fireman(50000, 5);
    Salary firemanswife(80000, 5);
    fireman + firemanswife;
    firemanswife - fireman;
    fireman - firemanswife;

    fireman == firemanswife;

    cout << fireman;
    cin >> firemanswife;
    cout << firemanswife;














    Hero pudge(200, 200);
    pudge.print();
    const Hero franc(30, 30);
    franc.print();



    Person a1("Petrov Petr");
    a1.print();
    Person a2(a1);
    a2.print();

    Point p1(3, 5);
    p1.print();
    Point p2(p1);
    p2.print();
}