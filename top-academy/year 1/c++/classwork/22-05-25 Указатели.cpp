#include <iostream>
using namespace std;

int main()
{
    int size{}, b{}, size1{};

    cin >> size; cout << endl;
    int* arr = new int[size];


    cout << "Full massive: " << endl;

    for (int i = 0; i < size; i++) {

        arr[i] = rand() % 101;
        cout << arr[i] << "\l";
    }
    cout << endl;
    cout << "1-remove even numbers \n2-remove not even numbers \nChoice -> ";
    cin >> b;
    cout << endl;

    switch (b)
    {
    case 1:
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {
                size1++;
            }
        }
        break;
    case 2:
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 != 0) {
                size1++;
            }
        }
    }
    int* arr1 = new int[size1];
    if (b == 1) {
        for (int i = 0, k = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {
                arr1[k] = arr[i];
                k++;
            }
        }
    }
    cout << "Even numbers: ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }
}
