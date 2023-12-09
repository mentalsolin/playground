#include <iostream>
#include <string>

using namespace std;

//void createHuman(string Student);

class Student {
//private: // Уровень доступа
private: // Уровень доступа
    string FIO;
    int age;
    string group;

public: // Уровень доступа
    // Сеттер задает имя объекту
    void setFIO(string FIOP) {
        FIO = FIOP;
    }
    // Геттер задает имя объекту
    string getFIO() {
        return FIO;
    }

    // Сеттер задает возраст объекту
    void setAGE(int AGEP) {
        age = AGEP;
    }
    // Геттер задает имя объекту
    int getAGE() {
        return age;
    }

    // Сеттер задает группу объекту
    void setGROUP(string GROUPP) {
        group = GROUPP;
    }
    string getGROUP() {
        return group;
    }
};

class Plus
{
public:
    int num1;
    int num2;
    int summ;

private:
    void setNum1(int num1P) {
        num1 = num1P;
    }

    void setNum2(int num2P) {
        num2 = num2P;
    }

    void plus(int num1P, int num2P) {
        summ = num1 + num2;
    }

    void getPlus() {
        return summ;
    }
};

Plus::Plus()
{
}

Plus::~Plus()
{
}

int main()
{

    Student student1;

    //cout << student1.FIO;

    student1.setFIO("Bjarne Stroustrup");
    student1.setAGE(71);
    student1.setGROUP("C++");

    cout << "Name: " << student1.getFIO() << endl;
    cout << "Age: " << student1.getAGE() << endl;
    cout << "Language: " << student1.getGROUP() << "\n\nCreate new human (name, age, group)\n";

    Student student2;

    string name{};
    string group{};
    int age{};

    cout << "Enter name: ";
    //cin >> name;
    student2.setFIO(name);

    cout << "Enter age: ";
    //cin >> age;
    student2.setAGE(age);

    cout << "Enter group: ";
    //cin >> group;
    student2.setGROUP(group);

    cout << "\nName: " << student2.getFIO() << endl;
    cout << "Age: " << student2.getAGE() << endl;
    cout << "Language: " << student2.getGROUP() << endl << endl;

    

    
}

//void createHuman(string student) {
//    string name{};
//    string group{};
//    int age{};
//
//    cout << "Enter name: ";
//    cin >> name;
//    student.setFIO(name);
//
//    cout << "Enter age: ";
//    cin >> age;
//    student.setAGE(age);
//
//    cout << "Enter group: ";
//    cin >> group;
//    student.setGROUP(group);
//
//
//
//    cout << "\nName: " << student.getFIO() << endl;
//    cout << "Age: " << student.getAGE() << endl;
//    cout << "Language: " << student.getGROUP() << endl;
//}