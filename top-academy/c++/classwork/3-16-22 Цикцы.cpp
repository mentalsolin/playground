#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	float what = 0;
	what = (int)what;

	while (what != 7) // Пока не равно 7ми будет работать цикл.
	{
		cout << " > Выберите задание 1 - 3 ( выход - 7 ) >> ";
		cin >> what; // Выбор задания.
		cout << endl;

		if (what == 1) // Если выбрано 1 запускать это задание.
		{
			while (what != 7)
			{
				if (what == 1) {

					double money{}, ice{};
					short count_ice = 0;

					cout << " > Введите колличество корманных денег >> ";
					cin >> money;

					cout << " > Введите цену мороженного >> ";
					cin >> ice;
					cout << endl;

					while (money >= ice) // Пока деньги больше равно цена мороженного будет идти цикл
					{
						count_ice++;
						money = money - ice;
						cout << " > Оставшееся деньги >> " << money << endl;
					}

					cout << endl << " > Куплено мороженного >> " << count_ice;
				}
				else if (what == 2)
				{
					cout << "Здание 2";
				}
			}
		}

		else if (what == 2) // Иначе если выбранно 2 запускать задание.
		{
			cout << " > Задание 2" << endl;

			int numenator{}, denumenator{};

			cout << " > Введите числитель >> ";
			cin >> numenator;

			do
			{
				cout << " > Введите знаменатоль >> ";
				cin >> denumenator;
			} while (denumenator == 0);
			cout << " > " << numenator << " / " << denumenator << " = " << numenator / denumenator << endl << endl;
		}

		else if (what == 3) // Иначе если выбранно 4 запускать задание.
		{
			cout << " > Задание 3. Калькулятор с циклом" << endl << endl;

			double num1{}, num2{}, res{};
			int menu;

			do
			{
				cout << " ------------ MENU ------------" << endl;
				cout << " > Введите 1     Сложение чисел" << endl;
				cout << " > Введите 2    Вычитание чисел" << endl;
				cout << " > Введите 3    Умножение чисел" << endl;
				cout << " > Введите 4      Деление чисел" << endl;
				cout << " > Введите 5              Выход" << endl << endl;

				cout << " > Ввод >> ";

				cin >> menu;

				switch (menu) {
				case 1:
					cout << " > Сложение. Введите число 1, 2 >> ";
					cin >> num1 >> num2;

					cout << endl << " > Ответ >> " << num1 + num2 << endl << endl;
					break;
				case 2:
					cout << " > Вычитание. Введите число 1, 2 >> ";
					cin >> num1 >> num2;

					cout << endl << " > Ответ >> " << num1 - num2 << endl << endl;
					break;

				case 3:
					cout << " > Умножение. Введите число 1, 2 >> ";
					cin >> num1 >> num2;

					cout << endl << " > Ответ >> " << num1 * num2 << endl << endl;
					break;
				case 4:
					cout << " > Деление. Введите число 1, 2 >> ";
					cin >> num1 >> num2;

					cout << endl << " > Ответ >> " << num1 / num2 << endl << endl;
					break;

				case 5:
					break;

				default:
					cout << " > Ошибка. Введите коректное число" << endl << endl;
				}
			} while (menu != 3);
		}

		else if (what == 4)
		{

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
			cout << " > Число >> " << summ << endl;
		}

			else if (what == 5)
			{
		
			int summ, num = 0;
			char symbol;

			cout << " > Введите кол-во звездочек и символ >> ";
			cin >> summ >> symbol;


			cout << endl << " > Символ >> " << symbol << endl;
			cout << " > Колличество >> " << summ << endl;
			cout << " > ";

			while (summ != num)
			{
				cout << symbol;
				num++;
			}
			cout << endl << endl;
		}

			else if (what == 6)
			{
			int summ, horizontal_on, num = 0;
			char symbol;

			cout << " > Введите кол-во звездочек и символ >> ";
			cin >> summ >> symbol;

			cout << " > Горизонтальная = 1 Вертикальная = 2 >> ";
			cin >> horizontal_on;


			cout << endl << " > Символ >> " << symbol << endl;
			cout << " > Колличество >> " << summ << endl;

			switch (horizontal_on)
			{

			case 1:
				while (summ != num)
				{
					cout << symbol;
					num++;
				}
				break;
				num = 0;

			case 2:
				while (summ != num)
				{
					cout << symbol << endl;
					num++;
				}
				num = 0;
				break;

			default:
				break;
			}

			cout << endl << endl;

			}
	}
}