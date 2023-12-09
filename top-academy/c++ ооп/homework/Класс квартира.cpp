#include <iostream>

using namespace std;

class Flat {
    int s;
    int cost;
    string name;
public:
    Flat(string name, int s, int cost) {
        this->name = name;
        this->s = s;
        this->cost = cost;
    }

    void operator==(Flat f1) {
        s == f1.s ? cout << "true" : cout << "false";
    }

    void operator=(Flat f1) {
        s = f1.s;
        cost = f1.cost;
    }

    void operator>(Flat f1) {
        if (cost > f1.cost) {
            cout << name << " cost = " << cost << " > " << f1.name << " cost = " << f1.cost;
        }
        else {
            cout << name << " cost = " << cost << " < " << f1.name << " cost = " << f1.cost;
        }
    }

    void print() {
        cout << name << " ";
        cout << "S = " << s << " ";
        cout << "Cost = " << cost << endl << endl;
    }
};

int main()
{
    Flat f1{"C1", 17, 2994};
    Flat f2{"C2", 12, 2594};
    f1>f2;
    cout << endl;
    cout << endl;
    cout << endl;

    f1.print();
    f2.print();
    cout << "---------------------" << endl;
    f1=f2;
    f1.print();
    f2.print();

}