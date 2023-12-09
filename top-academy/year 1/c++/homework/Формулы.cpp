#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Hello!\n";

    //Задание 1
    double r, r0, r1, r2, r3;
    int r1 = 0;
    int r2 = 0;
    int r3 = 0;
    int r0 = 0;
    int r = 0;
    cout << "Задание 1. Заданы три сопротивлении R1, R2, R3. Вычислить значение сопротивления R0 по формуле: 1/R0 = 1/R1+1/R2+1/R3.";
    cout << "Введите значение для R1: ";
    cin >> r1;
    cout << "Введите значение для R2: ";
    cin >> r2;
    cout << "Введите значение для R3: ";
    cin >> r3;
    r0 = 1 / r1 + 1 / r2 + 1 / r3;
    r = 1 / r0;
    cout << r; 

    //Задание 2

    int d = 0;
    int r2 = 0;
    int r = 0;
    int s = 0;
    cout << "Задание 2. По заданной длине окружности найти площадь круга по формуле S =\nВведите длинну окружности: ";
    cin >> s;
    d = s / 3.14;
    cout << d;

    return 0;
}
