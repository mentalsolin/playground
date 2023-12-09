#include <iostream>
using namespace std;

string integer_to_Roman(int n) {

    string str_romans[] = { "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    int values[] = { 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

    string result = "";

    for (int i = 0; i < 10; ++i) // пока i меньше 13
    {
        while (n - values[i] >= 0) // цикл число - массив с цифрами больше или равно нулю прибавляется
        {
            result += str_romans[i]; // римская цифра нужного числа
            n -= values[i]; // убирается цифра из первоначального числа числа
        }
    }

    return result;
}


int main()
{
    int n = 7;
    n = 204;
    cout << "Integer " << n << " : Roman " << integer_to_Roman(204) << endl;
    n = 85;
    cout << "Integer " << n << " : Roman " << integer_to_Roman(85) << endl;
    n = 359;
    cout << "Integer " << n << " : Roman " << integer_to_Roman(359) << endl;
    return 0;
}