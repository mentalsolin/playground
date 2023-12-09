#include <iostream>

using namespace std;

int main()
{
    int num1{}, num2{}, num3{}, number{}, numberno3and6{};
    int one{}, two{}, three{};

    for (int i = 100; i <= 999; i++) {
    
        num1 = i % 1000 / 100;
        num2 = i % 100 / 10;
        num3 = i % 10;
    
        if (num1 == num2 and num3 == num2) {
            three++;
        }

        if (num1 == num2 or num3 == num2) {
            two++;
        }

        else {
            one++;
        }
    }

    cout << " Enter enter a three-digit number: ";
    cin >> number;

    num1 = number % 1000 / 100;
    num2 = number % 100 / 10;
    num3 = number % 10;

    if (num1 == 3 or num1 == 6) {
        num1 = 0;
    }

    if (num2 == 3 or num2 == 6) {
        num2 = 0;
    }

    if (num3 == 3 or num3 == 6) {
        num3 = 0;
    }

    cout << "Two digits are the same.\t" << two << endl << "All numbers are different.\t" << one << endl << "all numbers except 3 and 6.\t" << num1 << num2 << num3 << endl;

}