#include <iostream>

using namespace std;

void changeVar2(int* ptr1);

void changeVar(double &ref1, double &ref2);

int main()
{

	//int what{};

	//int mas1[2]{ 5,5 };
	//cout << "enter numbers" << endl;;
	//cin >> mas1[0] >> mas1[1];
	//cout << "1. +;\n2. -" << endl;
	//cin >> what;

	//int mas2[2]{ 1,1 };

	//int* ptr1 = mas1;
	//int* ptr2 = mas2;

	//int counter{};

	//int i{}, k{}; // для индексов

	//if (what == 1) {
	//	for (i = 1, k = 0; i >= 0; i--, k++) {
	//		ptr2[i] = ptr1[k];

	//		counter += ptr2[i];
	//	}
	//}
	//else {
	//	if (what == 2) {
	//		for (i = 1, k = 0; i >= 0; i--, k++) {
	//			ptr2[i] = ptr1[k];

	//			counter -= ptr2[i];
	//		}
	//	}
	//}

	//cout << counter << " ";
	//cout << endl;


	/// Константыный указатель и указатель на константу

	//int a = 42;
	//int* const ptr = &a;

	//// Значение переменной через укзаатель
	//cout << *ptr << " " << a << endl;

	//// Константный указатель нужно инициализировать при создании
	////int* const prt1;

	//int b = 4;
	//// Константный указатель нельзя переназначить 
	////ptr = &b;

	//*ptr = b;

	//// Через коснтантный укзаатель можно изменять значение
	//cout << *ptr << " " << a << " " << b << endl;

	//// Указатель на константу можно сменить а константный указаттель нельзя
	//int number = 2;
	//const int* ptr2;

	//ptr2 = &number;
	//cout << *ptr2 << " " << number << endl;



	//int number1 = 42;
	//ptr2 = &number1;

	//cout << *ptr2 << " " << number1 << " " << endl;
	////*ptr2 = 20;


	//Ссылка это псевдоним
	//int varible = 42; // Переменная
	//int* ptr = &varible; // Указатель

	//int& ref = varible; // Ссылке присвоили значение
	//int* p = &ref; // Указателю присвоин аддресс переменной реф

	//// когда передаете переменную без выделения памяти

	//cout << "varible = " << varible << endl;
	//cout << "*ptr = " << *ptr << endl;
	//cout << "ref = " << ref << endl;
	//cout << "*p = " << *p << endl;
	

	//double trouble{ 4200.89000 };
	//double bigNumber{ 42.4242 };

	//cout << "1 - " << trouble << endl;
	//cout << "2 - " << bigNumber << endl << endl;

	////Вызов функции. Передача указателей
	//changeVar(&trouble, &bigNumber);

	//cout << "1 - " << trouble << endl;
	//cout << "2 - " << bigNumber << endl << endl;

	//changeVar(&trouble, &bigNumber);
	//cout << "1 - " << trouble << endl;
	//cout << "2 - " << bigNumber << endl;

	int Arr[] = { 1,1,1,1,1,1,1,1,1,1 };
	int* ptr = Arr;
	changeVar2(ptr);

}

void changeVar2(int ptr1[]) {
	int counter{ 0 };
	for (int i = 0; i < 10; i++) {
		counter += ptr1[i];
	}

	cout << counter;
}

void changeVar(double& ref1, double& ref2) {
	double temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

//void changeVar(double* ptr1, double* ptr2) {
//	double temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}