#include <iostream>
using namespace std;

void massRand() {
    srand(time(NULL));
    int mass[2][6];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            mass[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
}

void massPlus() {
    srand(time(NULL));
    int mass2[2][6];
    int var1[2][6];
    int var2[2][6];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            mass2[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            mass2[i][j] = var1[i][j];

            cout << var1[i][j];
        }
    }

    cout << var2;
}

int main()
{

    char a = 'a';
    cout << a++;


}
