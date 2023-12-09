#include <iostream>
using namespace std;

class Elevator {
    int top;
    int bottom;
    bool enable = true;
    int cur = 1;
public:
    Elevator(int top, int bottom) {
        this->top = top;
        this->bottom = bottom;
    };

    void setRange(int top, int bottom) {
        this->top = top;
        this->bottom = bottom;
        cur = this->bottom;
    }

    void render() {
        cout << top << endl;
        cout << bottom;
    }

    void toggle() {
        enable == true ? enable = false : enable = true;
        enable == true ? cout << "Elevator turned on" : cout << "Elevator turned off";
    }

    void status() {
        cout << "Current floor: " << cur << endl;
        enable == true ? cout << "Elevator turned on" : cout << "Elevator turned off";
    }

    void go() {
        int temp = 0;

        cin >> temp;

        if (temp > bottom && temp < top) {
            cur = temp;
        }
        else { 
            cout << "error";
        }
    }

    void start() {
        string a{};
        while (true) {
            int personFlor = bottom;
            if (enable == true) {
                cout << "1. Start\n2. Exit\n";
                cin >> a;
                if (a == "1") {
                    cout << "You are on the " << cur << "th floor\nSelect floor " << "(" << bottom << " - " << top << ")\n";
                    go();
                }
                if (a == "2") {
                    break;
                }
            }
            else {
                cout << "Elevator is off";
            }
        }
    }
};

int main()
{
    Elevator el1{ 9,1 };


    el1.start();
    cout << endl;


}