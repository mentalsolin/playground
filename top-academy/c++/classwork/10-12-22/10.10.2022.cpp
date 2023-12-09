#include <iostream>
using namespace std;

class Fraction {
private:
    int numen;
    int denom;
public:
    inline void setNumen(int pNumen) {
        numen = pNumen;
    }
    inline void setDenom(int pDenom) {
        numen = pDenom;
    }

    int getNumen() {
        return numen;
    }
    int getDenom() {
        return denom;
    }

    inline void multi(Fraction num2) {
        int a, b;

        a = numen * num2.denom + denom * num2.numen;
        b = denom * num2.denom;

        cout << a << endl;
        cout << "-" << endl;
        cout << b << endl;
    }

};
/*
class Student { // Create new class Student
private:
    string FIO;
    string group;

    unsigned short age;
public:
    inline void setFIO(string pFIO);
    string getFIO();

    void setGroup(string pGroup);
    string getGroup();

    void setAge(unsigned short pAge);
    unsigned short getAge();

    Student();
    Student(string pFIO, string pGroup, unsigned short pAge);
    ~Student();
//};
    */



int main()
{
    //Student stud1; // Create object stud1 in class Student
    //
    //stud1.setFIO("Petrov P. P.");
    //stud1.setGroup("A17");
    //stud1.setAge(15);
    //cout << "Student name: " << stud1.getFIO() << "\nStudent group: " << stud1.getGroup() << "\nStudent age: " << stud1.getAge();

    //Student stud2("Petrov P. P.", "P12", 12);

    Fraction num1;
    Fraction num2;

    num1.setNumen(1);
    num1.setDenom(4);

    num2.setNumen(2);
    num2.setDenom(3);

    num1.multi(num2);

}
/*
inline void Student::setFIO(string pFIO) { // Setter for class Student
    FIO = pFIO;
}
string Student::getFIO() { // Getter fo class Student
    return FIO;
}

void Student::setGroup(string pGroup) { // Setter for class Student
    group = pGroup;
}
string Student::getGroup() { // Getter fo class Student
    return group;
}
void Student::setAge(unsigned short pAge) { // Setter for class Student
    age = pAge;
}
unsigned short Student::getAge() { // Getter fo class Student
    return age;
}

Student::Student() {
    cout << "Constructor run/n";
};

Student::Student(string pFIO, string pGroup, unsigned short pAge) {
    FIO = pFIO;
    group = pGroup;
    age = pAge;
    cout << "Destructor run with 3 parameters\n";
};

Student::~Student() {
    cout << "Destructor run\n";
}
*/