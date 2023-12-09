#include <iostream>
#include "windows.h"
#pragma comment(lib, "winmm.lib") // Для звука

#define print cout <<
#define input cin >>
#define nl << endl << endl

using namespace std;

long factorialNumber(long num); //Рекурсия это функция которая вызывает функции внутри самой себя
long degreeFunction(long num, long deg); // Степень функция
void music(); // Музыка
void pointers();

int main()
{
	pointers();



	//music();
	//Sleep(104800);

	//// Степень числа
	//long degreeResult = degreeFunction(2, 3);
	//print "Result: " << degreeResult nl;

	//// Факториал чисел
	//long number = 5;
	//long result = factorialNumber(number);
	//print "Result " << number << "! = " << result << endl;
}

void pointers() {
	int x = 42;
	int* px{ nullptr }; // Указатель
	px = &x; // В указатель рх записываем адрес переменной х

	print "px = " << px << endl;

	print "x = " << x << "px = " << *px << endl;
	print "&x = " << &x << "px = " << px nl; // Вывод адреса пременной х, где хранится число 42. И вывели указатель


	// Нулевой указатель

	int* py{ nullptr };
	int y{ 42 };
	py = &y;
	
	print "y = " << y << "py = " << *py << endl;
	print "&y = " << &y << "py = " << py nl;

	px = py;
	print "px = " << *px << "py = " << *py << "y = " << y nl;
}

long factorialNumber(long num) {

	if (num < 1) {
		return 1;
	}
	else {

		if (num == 1) {
			return 1;
		}
		else
		{
			return num * factorialNumber(num - 1);
		}
	}
}

long degreeFunction(long num, long deg) {
	if (deg == 0) {
		return 1;
	}
	else {
		if (deg == 1)
		{
			return num;
		}
		else
		{
			return num * degreeFunction(num, deg - 1);
		}
	}
}

void music() {
	PlaySound(TEXT("intro.wav"), NULL, SND_FILENAME | SND_ASYNC);
}