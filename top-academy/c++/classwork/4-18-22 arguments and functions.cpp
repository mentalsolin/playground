#include <iostream>
using namespace std;

void init_random(int[], const int); // Прототип функции init_random
void print_array(int[], int); // Прототип функции array

int main()
{
    srand(time(NULL)); // Рандом по времени
    const int SIZE = 10; // Константа переменной SIZE
    int mas[SIZE]{}; 
    init_random(mas, SIZE);
    cout << "Print all array: ";
    print_array(mas, SIZE);

    int num1{ 5 }, num2{ 3 };
}

void print_array(int print_array[], int print_SIZE) {
    for (int i = 0; i < print_SIZE; i++) {
        cout << print_array[i] << " ";
    }
}

void init_random(int array[], const int SIZE_arr) {
    for (int i = 0; i < SIZE_arr; i++) {
        array[i] = rand() % 10;
    }
}
