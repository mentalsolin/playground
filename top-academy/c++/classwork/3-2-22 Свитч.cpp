#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	/*
	float num1{}, num2{};
	cout << "Калькулятор на else if" << endl << endl << "Введите первое число >> ";
	cin >> num1;

	cout << endl << "Для сложения чисел введите +" << endl;
	cout << "Для вычитания чисел введите -" << endl;
	cout << "Для умножения чисел введите *" << endl;
	cout << "Для деления чисел введите /" << endl;
	cout << endl << "Ввод >> ";

	char symbol{}; // Объявление переменной

	cin >> symbol; // Ввод символа (+ - * /)

	cout << endl <<"Введите второе число >> ";
	cin >> num2;

	if (symbol == '+') {
		cout << "Сумма вывода >> " << num1 << " + " << num2 << " = " << num1 + num2 << endl; 
	}
	else if (symbol == '-') {
		cout << "Сумма вывода >> " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	}
	else if (symbol == '*') {
		cout << "Сумма вывода >> " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	}
	else if (symbol == '/') {
		cout << "Сумма вывода >> " << num1 << " / " << num2 << " = " << num1 * num2 << endl;
	}


	double num3{}, num4{};

	cout << "Введите первое число >> ";
	cin >> num3;

	cout << "Для сложения чисел введите +" << endl;
	cout << "Для вычитания чисел введите -" << endl;
	cout << "Для умножения чисел введите *" << endl;
	cout << "Для деления чисел введите /" << endl;
	cout << endl << "Ввод >> ";

	char symbol1{}; // Объявление переменной

	cin >> symbol1; // Ввод символа (+ - * /)

	cout << "Введите второе число >> ";
	cin >> num4;

	switch (symbol1) {

	case '+':
		cout << "Сумма = " << num3 + num4 << endl;
		break;

	case '-':
		cout << "Вычитание = " << num3 - num4 << endl;
		break;

	case '*':
		cout << "Умножение = " << num3 * num4 << endl;
		break;

	case '/':
		cout << "Деление = " << num3 / num4 << endl;
		break;

	default:
		cout << "Ошибка: Некоректное значение";
		break;
	}

	

	cout << endl;
	cout << "Введите оценку (A-F) >> ";
	char grade{};
	cin >> grade;
	switch (grade)
	{
	case 'A':
	case 'a':
		cout << "Оценка 5" << endl;
		break;

	case 'B':
	case 'b':
		cout << "Оценка 4" << endl;
		break;

	case 'C':
	case 'c':
		cout << "Оценка 3" << endl;
		break;

	case 'F':
	case 'f':
		cout << "Оценка 2" << endl;
		break;



	default:
		cout << "Ошибка: Некоректное значение";
		break;
	}
	
	
	const int num5 = 10;
	num5 = num5 + 1; // Нельзя из за константы

	

	// enum

	enum coins_usa { 
		penny = 1, nickel = 5,
		dime = 10, quartet = 25,
		half = 50, dollar = 100 
	};
	int coin;
	cout << endl << "Введите кол-во центов >> ";
	cin >> coin;

	switch (coin) {
		
	case penny: 
		cout << endl << "penny = " << penny << " cent" << endl;
		break;

	case nickel:
		cout << endl << "nickel = " << nickel << " cent" << endl;
		break;

	case dime:
		cout << endl << "dime = " << dime << " cent" << endl;
		break;

	case quartet:
		cout << endl << "quartet = " << quartet << " cent" << endl;
		break;

	case half:
		cout << endl << "half = " << half << " cent" << endl;
		break;

	case dollar:
		cout << endl << "dollar = " << dollar << " cent" << endl;
		break;

	default:
		cout << endl << "Ошибка: Некоректное значение" << endl;
	}
	

	// Задание 1

	int num6 = 0;

	cin >> num6;

	if (num6 % 2 == 0) {
		cout << "Четное";
	}
	else {
		cout << "Не четное";
	}
	

	// Задание 2

	double num7{}, num8{};

	cout << "Введите первое число >> ";
	cin >> num7;

	cout << "Введите первое число >> ";
	cin >> num8;

	if (num7 < num8) {
		cout << num7;
	}
	else {
		cout << num8;
	}
	
	// Задание 3

	int num9;

	cout << "Задание 3. Пользователь вводит число. Определить, положительное это число, отрицательное или равно нулю." << endl;
	cout << "Введите первое число >> ";
	cin >> num9;


	if (num9 < 1) {
		cout << "Это число отрицательное";
	}
	else
	{
		cout << "Это число положительное";
	}
	
	// Задание 4

	double num10{}, num11{};

	cout << "Задание 4. Пользователь вводит два числа. Определить, равны ли эти числа, и если нет вывести их на экран в порядке возрастания." << endl;
	cout << "Введите первое и втрое число >> ";
	cin >> num10 >> num11;

	if (num10 == num11) {
		cout << "Они равны";
	}
	else {
		if (num10 < num11) {
			cout << num10 << endl << num11;
		}
		else {
			cout << num11 << endl << num10;
		}
	}
	

	// Задание 5

	double num12, num13, num14, num15, num16, math;

	cout << "Введите оценки >> ";
	cin >> num12 >> num13 >> num14 >> num15 >> num16;

	math = (num12 + num13 + num14 + num15 + num16) / 5;
	cout << "Средний бал >> " << math;

	if (math >= 4) {
		cout << " Допущен" << endl;
	}
	else
	{
		cout << " Не допущен" << endl;
	}
	
	// Задание 6 

	int num17;

	cout << "Введите число >> ";
	cin >> num17;

	if (num17 % 2 == 0) {
		cout << num17 * 3;
	}
	else
	{
		cout << num17 / 2;
	}
	*/

	double num18, num19, num20, num21, num22, num23, num24;

	cout << "Введите 7 чисел >> ";
	cin >> num18 >> num19 >> num20 >> num21 >> num22 >> num23 >> num24;

	if (num18 < num19)
	{
		num18 = num19;
	}
	if (num18 < num20)
	{
		num18 = num20;
	}
	if (num18 < num21)
	{
		num18 = num21;
	}
	if (num18 < num22)
	{
		num18 = num22;
	}
	if (num18 < num23)
	{
		num18 = num23;
	}
	if (num18 < num24)
	{
		num18 = num24;
	}
	cout << "Максимальное число >> " << num18;
	
}


