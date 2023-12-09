#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
    while (low <= high) { // Если самое малое число больше или равно большему то будет работать цикл
        int mid = low + (high - low) / 2; // среднее число. переменная которая определяет большое и малое число и ищет число между ними

        if (array[mid] == x) { // Если среднее число равно искомому то выдает результат
            return mid;
        }

        if (array[mid] < x) { // Если среднее число не равно искомому то прибавляется 1 к малому числу
            low = mid + 1;
        }

        else {
            high = mid - 1; // В обратном случае убавляется числа у большого числа
        }
    }

    return -1; // Если не находит число выдает -1
}

int main(void)
{
    int array[] = { 3, 4, 5, 6, 7, 8, 9 };

    int x = 4; // Искомое число
    int n = sizeof(array) / sizeof(array[0]); // Определяет размер
    int result = binarySearch(array, x, 0, n - 1); // Создает переменную result
    if (result == -1) { // Если переменная result равна -1. Выдает сообщение не найдено
        cout << "Not found";
    }
    else { // В обратном случае найдено и индекс числа
        cout << "Element is found at index " << result;
    }
}