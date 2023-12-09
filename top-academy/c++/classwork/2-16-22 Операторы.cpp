#include <iostream>
using namespace std;

int main()
{
    
    setlocale(LC_ALL, "");

    /*
    cout << "1 " << (5 > 3)<<endl;
    cout << "2 " << (5 <= 3) << endl; // Оператор меньше равно
    cout << "3 " << (5 == 3) << endl; // Оператор равенства
    cout << "4 " << (5 != 3) << endl; // Оператор неравенства

        // Логическое и
    cout << "5 " << ((5 != 3) && (5 != 4)) << endl;
    cout << "6 " << ((5 != 3) and (5 != 4)) << endl;

        // Логическое или
    cout << ((5 == 5) || (5 == 6)) << endl;
    cout << ((5 == 1) or (4 >= 5)) << endl;

        // Возраст
    int num{};
    cout << "Введите число: ";
    cin >> num;
    cout << ((num <= 10) && (num > 0)) << endl;
    cout << "Если вы видите 1, то число входит в диапазон.\nЕсли вы видите 0 то число не входит в диапазон." << endl;


    int num1{};
    cout << "Введите число: ";
    cin >> num1;

    if ((num1 <= 10) && (num1 > 0)) {
        cout << "Если вы видите число 1, число входит в диапазон" << endl;
    }
    else {
        cout << "Если вы видите 0, число не входит в диапазон" << endl;
    }


    double number1{ 3.123 }, number2{ 4.123 };
    if (number1 > number2) {
        cout << "Наибольшее число: " << number1;
    }
    else {
        cout << "Наибольшее число: " << number2;
    }

    cout << "\nВведите первое число: ";
    cin >> number1;

    cout << "Введите второе число: ";
    cin >> number2;

    if (number1 == number2) {
        cout << "Числа равны " << number1 << "=" << number2 << endl;
    }
    else {
        cout << "Наибольшее число: " << number2;
    }

        // Тернарный оператор
    float number3{}, number4{};
    cout << "\nВведите первое число, второе число: ";
    cin >> number3 >> number4;
    (number3 > number4) ? cout << number3 : cout << number4;
    */
    
        // Задание 1
    double num1, num2, num3, math;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Введите третье число: ";
    cin >> num3;

    //Сумма чисел
    cout << num1 << " + " << num2 << " + " << num3 << " = " << (num1 + num2 + num3);
      
    cout << "\n";
    //Произведение чисел
    cout << num1 << " * " << num2 << " = " << (num1 * num2 * num3);

    cout << "\n";
    //Среднее арифметическое
    math = num1 + num2 + num3;
    cout << "(" << num1 << " + " << num2 << " + " << num3 << ") / 3 = " << (math / 3);


        // Задание 2
    double nout, kolvo, skidka, nout_math;

    cout << "\nВведите цену ноутбука: ";
    cin >> nout;

    cout << "Введите колличество ноутбуков: ";
    cin >> kolvo;

    cout << "Введите скидку: ";
    cin >> skidka;

    nout_math = nout * kolvo / 100 * skidka;
    cout << "Общая сумма заказа: " << nout * kolvo - nout_math;
    
    
        // Задание 3
    double summa, manager;

    long summamath ;
    cout << "\nВведите общую сумму сделок: ";
    cin >> summa;

    summamath = summa / 100 * 5;
    manager = summamath + summa + 100;

    cout << "Зарплата менеджера составит: " << manager;
    

        //Задание 4
    double film_gb, disketa, form_mb, form_kb, kolvo_disket;

    cout << "\nВведите вес фильма в ГБ: ";
    cin >> film_gb;

    cout << "Введите сколько КБ в дискете: ";
    cin >> disketa;

    form_mb = film_gb * 1024;

    form_kb = form_mb * 1024;

    kolvo_disket = form_kb / disketa;

    cout << "Вам понадобится " << kolvo_disket << " дискет ";
    
        // Задание 5

    
}