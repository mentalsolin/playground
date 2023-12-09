#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    
	float what = 0;
	what = (int)what;

	while (what != 7)
	{
		cout << " > Выберите задание (1 - 2)" << endl;
		cout << " > Для выхода введите 7 >> ";
		cin >> what;

		if (what == 1) {
			
			cout << endl << " > Задание 1. Напишите программу, которая запрашивает два целых числа x и y, после чего вычисляет и выводит значение x в степень y." << endl;

			int a, b;

			cout << " > Введите 2 числа которые нужно возвести в степень >> ";
			cin >> a >> b;

			cout << " > " << a << " в степени " << b << " = " << pow(a, b) << endl;

			continue;
		}

		else if (what == 2) {
			
			cout << endl << " > Задание 2. Найти среднее арифметическое всех целых чисел от 1 до 1000." << endl;

			int summ = 0;
			int vvod = 0;
			int counter = 0;

			cout << " > Введите число >> ";
			cin >> vvod;

			while (counter != vvod + 1)
			{
				summ = summ + counter;

				counter++;
			}
			cout << " > Число >> " << summ / vvod << endl << endl;



			continue;
		}

		else if (what == 7) {
			cout << " > Вы вышли из цыкла";
			break;
		}

		else
		{
			cout << " > Ошибка" << endl;
			continue;
		}
	}

}