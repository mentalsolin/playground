#include <iostream>

using namespace std;

void func1(int size) {
    int* mas;
    mas = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "mas[" << i << "] = ";
        mas[i] = rand() % 99 + 1;
        cout << mas[i] << endl;
    }
    cout << "Array: ";

    for (int i = 0; i < size; i++)
        cout << mas[i] << "\t";
    delete[] mas;
    cin >> size;
}



int main()
{
    srand(time(NULL));

    int b{};

    while (b != 7)
    {
    func1(17);
    b++;
    }
}
