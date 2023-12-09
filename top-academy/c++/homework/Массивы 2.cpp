#include <iostream>
using namespace std;

int main()
{
    int mas[2][5];
    int temp{};
    int counter{};

    srand(time(NULL));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            mas[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            temp +=mas[i][j];
        }
    }
    cout << temp / 10;

    cout << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            mas[i][j] = rand() % 20 - 10;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            if (mas[i][j] > -1) {
                counter++;
            }
        }
    }

    cout << counter;

    cout << endl;


    int mas2[2][5], mas3[1][5], mas4[1][5];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            mas2[i][j] = rand() % 20 - 10;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            mas3[i][j] = mas2[i][j];
        }
    }

    for (int i = 1; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            mas2[i][j] = rand() % 20 - 10;
        }
    }

}
