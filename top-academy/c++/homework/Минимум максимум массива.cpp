#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));

    int simpleArray[5];

    int min{ 10 };
    int max{ 0 };

    for (int i = 0; i < 5; i++) {
        simpleArray[i] = rand() % 9 + 1;
    }

    cout << "Array: ";

    for (int i = 0; i < 5; i++) {
        cout << simpleArray[i] << " ";
    }

    cout << endl;

    int tempNumber1{};
    int tempNumber2{};

    for (int i = 0; i < 5; i++) {
        if (simpleArray[i] > max) {
            max = simpleArray[i];
            tempNumber2 = i;
        }
        if (simpleArray[i] < min) {
            min = simpleArray[i];
            tempNumber1 = i;
        }
    }

    cout << max << " << max | min >> " << min << endl;
    cout << tempNumber2 << " << num | num >> " << tempNumber1;
}
