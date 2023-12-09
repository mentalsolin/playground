#include <iostream>
#include <random>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //const int count_lessons = 12;
    //// Объявление массивов
    //int marks [count_lessons];
    //marks[0] = 5;
    //marks[1] = 4;
    //marks[2] = (4 + 5 + 3) / 3;
    //for (int i = 3; i < 12; i++) {
    //    marks[i] = 5;
    //}

    //for (int i = 0; i < 12; i++) {
    //    cout << marks[i] << " ";
    //}
    //cout << endl;

    //float marks_f[] = { 94.5, 80.5 };
    //char word[6] = { 'p', 'i', 'g', 'e', 'o', 'n' };
    //for (int i = 0; i <= 5; i++) {
    //    cout << word[i] << "";
    //}

    //cout << endl;
    //for (int i = 0; i <= 5; i++) {
    //    cin >> word[i];
    //}

    //for (int i = 0; i <= 5; i++) {
    //    cout << word[i] << " ";
    //}

    //cin >> word[0];
    //for (int i = 0; i <= 5; i++) {
    //    cout << word[i] << " ";
    //}
    //
    //int num[7] = { -3, -2, -1, 0, 1, 2, 3 };
    //int counter{}, max{}, min{};
    //for (int i = 0; i <= 6; i++) {
    //    if (num[i] < 0) {
    //        counter++; } }
    //cout << "Отрицательные числа: " << counter;

    /*srand(time(NULL));
    int code = rand() % 1000;
    int code_a;
    int a, b, c;
    int fails = 0;

    for (int i = 0; i <= 999; i++) {
        if (i == code) {
            code_a = i;
            fails = i;
            break;
        }
    }

    cout << "Попытки: " << fails - 1 << endl;

    cout << "Время: " << fails * 3 << " секунд." << endl;*/

    int vol[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int i = 9; i >= 0; i--) {
        cout << i; }
}