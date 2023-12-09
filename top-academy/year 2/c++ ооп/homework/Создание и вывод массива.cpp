#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
class Array {
private:
    static const int size{ 8 };
    T arr[size];
public:
    Array() {
        for (int i = 0; i < size; i++) {
            this->arr[i] = rand() % 10;
        }
    }
    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void max() {
        int max = 0;
        for (size_t i = 0; i < (sizeof(arr) / sizeof(*arr)); i++)
        {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "max = " << max;
    }


    void min() {
        int min = 10;
        for (size_t i = 0; i < (sizeof(arr) / sizeof(*arr)); i++)
        {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        cout << "min = " << min;
    }
};

int main()
{
    srand(time(NULL));
    Array<int> a;
    cout << "int Array initialization: " << endl;
    a.print();

    a.max();
    cout << endl;
    a.min();
}