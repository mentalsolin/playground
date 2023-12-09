#include <iostream>
using namespace std;

//void star(int count) {
//    for (int i = 0; i < count; i++) {
//        cout << "*";
//    }
//    cout << endl;
//
//}
//
//void print_symbol(char symbol, int count) {
//    cout << symbol;
//
//    for (int i = 0; i < count; i++) {
//        cout << symbol;
//    }
//}
//
//int MyPow(int number, int power) {
//    int res(1);
//    for (int i = 0; i - power; i++) {
//        res = res*number;
//    }
//    return res;
//}

//int square2(int num1, int num2) {
//
//    
//}

//int suquare(int num1, int num2) {
//    for (int i = 0; i < num1; ++i) cout << "*";
//    cout << endl;
//
//    for (int i = 0; i < num2 - 2; ++i) {
//        cout << "*";
//        for (int j = 0; j < num1 - 2; ++j) cout << '*';
//        cout << "*" << endl;
//    }
//
//    for (int i = 0; i < num1; ++i) cout << "*";
//    cout << endl;
//}

//int vaktorial() {
//
//    cout << res;
//}

int main() {
    setlocale(LC_ALL, "RU");

    int number;
    int res;

    cout << "Введите факториал >> ";
    cin >> number;
    res = 1;
    for (int i = 1; i <= number; i++) {
        res = res * i;
        cout << i << " ";
    }
    cout << res;
}