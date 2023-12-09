#include <chrono>
#include <iostream>
using namespace std;
bool IsSimple(unsigned short n) {
    if (n < 2) // если число до котогоро нужно считать меньше двух не отправлять
        return false;
    for (unsigned short j = 2; j * j <= n; ++j) // цикл в котором считаются числа от 2 до
        if (n % j == 0)
            return false;
    return true;
}
int main()
{
    using chrono::high_resolution_clock;
    using chrono::duration;
    while (true)
    {
        auto t1 = high_resolution_clock::now();
        unsigned short n = 100;
        for (unsigned short i = 2; i < n; i++)
            if (IsSimple(i))
                cout << i << endl;
        auto t2 = high_resolution_clock::now();
        duration<double, milli> ms_double = t2 - t1;
        cout << endl << ms_double.count() << "ms\n";
    }
}