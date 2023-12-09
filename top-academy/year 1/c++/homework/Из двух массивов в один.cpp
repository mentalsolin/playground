#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));

    int arrayOne[10]{};
    int arrayOnePart1[5]{};
    int arrayOnePart2[5]{};

    for (int i = 0; i < 10; i++) {
        arrayOne[i] = rand() % 10 + 1;
    }

    for (int i = 0; i < 5; i++) {
        arrayOnePart1[i] = arrayOne[i];
        arrayOnePart2[i] = arrayOne[i+5];
    }

    cout << "arrayOne: ";
    for (int i = 0; i < 10; i++) {
        cout << arrayOne[i];
    }
    cout << endl;

    cout << "PartOne1: ";
    for (int i = 0; i < 5; i++) {
        cout << arrayOnePart1[i];
    }
    cout << endl;

    cout << "PartOne2: ";
    for (int i = 0; i < 5; i++) {
        cout<< arrayOnePart2[i];
    }
    cout << endl;
    cout << endl;

    int arrayTwoPart1[10]{};
    int arrayTwoPart2[10]{};
    int arrayResult[10]{};

    for (int i = 0; i < 10; i++) {
        arrayTwoPart1[i] = rand() % 4 + 1;
        arrayTwoPart2[i] = rand() % 4 + 1;

        arrayResult[i] = arrayTwoPart1[i] + arrayTwoPart2[i];

        cout << arrayTwoPart1[i] << " + " << arrayTwoPart2[i] << " = ";
        cout << arrayResult[i];
        cout << endl;
    }
}