#include <iostream>
using namespace std;

int main()
{
    
    int code{}, var{};

    srand(time(NULL));

    code = rand() % 1000;

    for (int i = 1; i < 999 + 1; i++) {
        if (i == code) {
            cout << "Code: " << i << endl;
            var = i;
        }
    }

    cout << "Time to crack password: " << var * 3 << " " << "seconds";
}
