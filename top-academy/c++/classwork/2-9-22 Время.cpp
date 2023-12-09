#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");

    float s{}, h{}, m{};
    cout << "Введите секунды: ";
    cin >> s;
    m = s / 60;
    h = s / 3600;
    cout << "Секунды: " << s;
    cout << "\n Минуты: " << m;
    cout << "\n Часы: " << h;





}
