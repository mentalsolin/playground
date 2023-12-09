#include <iostream>
using namespace std;

/*
Шаблон класса - позволяет работать в классе с разными типами данных
синтаксис шаблона класса:
template<class T> тип_возрв_значен назв_класса{}
*/
template<class T>
class Array {
private:
    static const int size{ 5 };
    T arr[size];
public:
    //конструктор без параметров, по умолчанию
    Array() {
        //size = 5;
        for (int i = 0; i < size; i++) {
            this->arr[i] = rand() % 100;//
        }
    }
    int getsize()const;  //{константный метод - дает возможность работать с const объектами
    //    return size;//геттер - для чтения данных
    //}
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void sort() {
        for (int i = size - 1; i > 0; i--) {//по сколько раз мы пройдем по кругу по элементам
            for (int j = 0; j < i; j++) {//проход по всем элементам от 0 до 5
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

};
/*
* Синтаксис:
* Шаблон <class T>
* тип_воз_знач имя_класса<T> назв_меода() const{}
*/
template<class T>
int Array<T>::getsize()const { //константный метод - дает возможность работать с const объектами
    return size;//геттер - для чтения данных
}



void output(int* mas2) {
    //sizeof(mas2) / sizeof(int) = 40 / 4 = 10
    for (int i = 0; i < 10; i++) {
        cout << mas2[i] << " ";
    }
    cout << endl;
}
/*Шаблонная функция - работает с разными типами данных*/
template<typename T>
T* plus1(T mas[], T mas1[]) {
    T temp[10];
    for (int i = 0; i < 5; i++) {
        temp[i] = mas[i];
    }
    for (int i = 0; i < 5; i++) {
        temp[i + 5] = mas1[i];
    }
    for (int i = 0; i < 10; i++) {
        cout << temp[i] << " ";
    }

    cout << endl;
    output(temp);
    return temp;
}

int main()
{
    srand(time(NULL));
    Array<int> a; //объект шаблона класса
    cout << "int Array initialization: " << endl;
    a.display();

    Array<char> b;
    cout << "char Array initialization: " << endl;
    b.display();

    int mas[5] = { 3,2,8,5,7 };
    int mas1[5] = { 50,120,20,70,10 };

    int* mas2 = plus1(mas, mas1);
    output(mas2);//вывод массива
}