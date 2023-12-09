#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int num{};

    srand(time(0)); //srand(time(NULL));
    //num = rand();
    //cout << num << endl;

    //for (int i = 0; ; i++) {
    //    num = rand() % 23; // От 0 до 22
    //    if (num == 17) {
    //        cout << num << endl;
    //        break;
    //    }
    //    cout << num;
    //}

    //num = rand() % 5 + 11;
    //cout << num << endl;

    //num = rand() % 20 + 31;
    //cout << num << endl;

    //num = rand() % 9 + 1;
    //cout << num << endl;

    //num = rand() % (100 - 4) + 4;
    //cout << num << endl;
    //
    //num = rand() % 99 - 100;
    //cout << num << endl;

    //num = rand() % 400 - 200;
    //cout << num << endl;

    //num = rand() % 3 - 17; // -3 - 17
    //cout << num << endl;


    //// Массивы и endl

    //cout << endl;

    //int num2[5];
    //for (int i = 0; i < 5; i++)
    //{
    //    num2[i] = rand() % 10;
    //    cout << i + 1 << ": " << num2[i] << i << "\n";
    //}

    //cout << endl;
    //// Двумерный массив

    //char sym[3][3] = { {'a', 'b', 'c'},
    //                 {'d', 'e', 'f'},
    //                 {'g', 'h', 'i' } };

    //// Сначало строка потом столбцы
    //for (int i = 0; i < 3; i++) {
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << sym[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //cout << endl;

    int num3[5][10];

    //for (int i = 0; i < 5; i++) {
    //    for (int j = 0; j < 10; j++) {
    //        num3[i][j] = rand() % 140 + 10;
    //        cout << num3[i][j] << "\t";
    //    }
    //    cout << endl;
    //}

    int max = 0;
    int number[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (number[i][j] > max) {
                max = number[i][j];
            }
        }
    }

}
