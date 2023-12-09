#include <iostream>

using namespace std;

int main()
{
    




    // Задание 1 не понял как выполнять







    // Задание 2. Написать программу, которая выводит на экран шахматную доску с заданным размеров клеточки.

    int range;
    char symbol;

    cout << "Enter range: ";
    cin >> range;

    cout << "Enter symbol: ";
    cin >> symbol;

    for (int i = 0; i < range/2; i++) {
        for (int i = 0; i < 4; i++) {
            for (int i = 0; i < range; i++) {
                cout << symbol;
            }

            for (int i = 0; i < range; i++) {
                cout << "-";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < range/2; i++) {
        for (int i = 0; i < 4; i++) {
            for (int i = 0; i < range; i++) {
                cout << "-";
            }

            for (int i = 0; i < range; i++) {
                cout << symbol;
            }
        }
        cout << endl;
    }

    for (int i = 0; i < range / 2; i++) {
        for (int i = 0; i < 4; i++) {
            for (int i = 0; i < range; i++) {
                cout << symbol;
            }

            for (int i = 0; i < range; i++) {
                cout << "-";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < range / 2; i++) {
        for (int i = 0; i < 4; i++) {
            for (int i = 0; i < range; i++) {
                cout << "-";
            }

            for (int i = 0; i < range; i++) {
                cout << symbol;
            }
        }
        cout << endl;
    }

    for (int i = 0; i < range / 2; i++) {
        for (int i = 0; i < 4; i++) {
            for (int i = 0; i < range; i++) {
                cout << symbol;
            }

            for (int i = 0; i < range; i++) {
                cout << "-";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < range / 2; i++) {
        for (int i = 0; i < 4; i++) {
            for (int i = 0; i < range; i++) {
                cout << "-";
            }

            for (int i = 0; i < range; i++) {
                cout << symbol;
            }
        }
        cout << endl;
    }

    for (int i = 0; i < range / 2; i++) {
        for (int i = 0; i < 4; i++) {
            for (int i = 0; i < range; i++) {
                cout << symbol;
            }

            for (int i = 0; i < range; i++) {
                cout << "-";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < range / 2; i++) {
        for (int i = 0; i < 4; i++) {
            for (int i = 0; i < range; i++) {
                cout << "-";
            }

            for (int i = 0; i < range; i++) {
                cout << symbol;
            }
        }
        cout << endl;
    }

}
