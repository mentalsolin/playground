#include <iostream>
#include <vector>
#include <deque>

using namespace std;
/*
    контейнер хранит в себе набор одинаковых данных

    - последовательные
    - ассоциативные
    - контейнеры-адаптеры
*/ 

void BubbleSort(vector<int>& values) {
    for (size_t idx_i = 0; idx_i + 1 < values.size(); ++idx_i) {
        for (size_t idx_j = 0; idx_j + 1 < values.size() - idx_i; ++idx_j) {
            if (values[idx_j + 1] > values[idx_j]) {
                swap(values[idx_j], values[idx_j + 1]);
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");
    vector <int> massiv;
    vector <int> massiv1{ 1,2,3,4,5 };
    cout << "first element vector: " << massiv1[0] << endl;
    cout << "all elements in vector: ";
    for (size_t i = 0; i < massiv1.size(); i++) {
        cout << massiv1[i] << " ";
    }
    cout << endl;
    cout << "add element ";
    massiv1.push_back(100);
    cout << "all elements in vector: ";
    for (auto i = massiv1.begin(); i < massiv1.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    massiv1.clear();
    cout << "all elements in vector: ";
    for (auto i = massiv1.begin(); i < massiv1.end(); i++) {
        cout << *i << " ";
    }

    cout << endl;
    // вектор с буквами
    vector <char> massiv2;
    for (size_t i = 0; i < 33; i++) {
        massiv2.push_back(i - 32);
    }
    cout << endl;
    copy(massiv2.begin(), massiv2.end(), ostream_iterator<char>(cout, " "));
    massiv2.insert(massiv2.begin()+6, 'ё');
    cout << endl;
    copy(massiv2.begin(), massiv2.end(), ostream_iterator<char>(cout, " "));

    for (auto i = massiv2.rbegin(); i != massiv2.rend(); i++) {
        cout << *i << "";
    }
    cout << endl;
    cout << "All elements massiv2 (а-я): ";
    reverse(massiv2.begin(), massiv2.end());
    //copy(massiv2.begin(), massiv2.end(), ostream_iterator<char>(cout, " "));

    for (char i : massiv2) {
        cout << i << " ";
    }
    cout << endl;

    string str1{ "яблоко яблоко" };
    cout << str1.erase(str1.find(' '), 1) << endl;

    vector <double>massiv3{ 1.5,2.7,3.2 };
    vector <double>massiv4(massiv3);

    // тернарный оператор
    (massiv3 == massiv4) ? cout << "true" : cout << "false";
    cout << endl;

    deque<int>deque1;
    deque<int>deque2(5);

    for (size_t i = 0; i < deque2.size(); i++) {
        cout << deque2[i] << " ";
    }
    if (!deque2.empty()) {
        copy(deque2.begin(), deque2.end(), ostream_iterator<int>(cout, " "));
    }

    for (int i = 0; i < deque1.size(); i++) {
        deque2[i] = rand() % 10 - 3;
        cout << deque2[i] << " ";
    }

    copy(deque2.begin(), deque2.end(), ostream_iterator<int>(cout, " "));
    cout << "delete first element" << endl;
    deque2.pop_front();

    copy(deque2.begin(), deque2.end(), ostream_iterator<int>(cout, " "));

    cout << "\n--------------------------------------------------------\n";

    vector<int>num1{ 0,7,3,0,7,-9,3,6,2,7,12,8,4 };

    int min{999999}, max{-999999};

    for (size_t i = 0; i < num1.size(); i++)
    {
        if (num1[i] > max) {
            max = num1[i];
        }
        else {
            min = num1[i];
        }
    }
    cout << "raw array: ";
    copy(num1.begin(), num1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    cout << "sort array: ";
    BubbleSort(num1);
    copy(num1.begin(), num1.end(), ostream_iterator<int>(cout, " "));

}