#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	float what = 0;
	what = (int)what;

	while (what != 7)
	{
		cout << " > Выберите задание ( выход - 7 ) >> ";
		cin >> what;

		if (what == 1)
		{
			int fuel, weight, fuel_consumption, a_b, b_c, g;

			cout << " > Введите расстояние между точкой A и B >> ";
			cin >> a_b;

			cout << " > Введите расстояние между точкой B и C >> ";
			cin >> b_c;

			cout << " > Введите вес груза >> ";
			cin >> fuel;

			g = a_b + b_c;

			if (fuel < 501 and fuel > 0)
			{
				cout << " > Груз до 500 кг. " << endl;

				if (a_b > 299 or b_c > 299)
				{
					cout << " > Самолет не долетит ( нехватка топлива )." << endl;
				}
				else if (a_b < 299 or b_c < 299)
				{
					cout << " > Вам понадобится " << a_b + b_c << " топлива." << endl;
				}
			}

			else if (fuel < 1001 and fuel > 500)
			{
				cout << " > Груз до 1000 кг. " << endl;
				fuel_consumption = 4;

				if (a_b * fuel_consumption > 299 or b_c * fuel_consumption > 299)
				{
					cout << " > Самолет не долетит ( нехватка топлива )." << endl;
				}
				else if (a_b * fuel_consumption < 299 or b_c * fuel_consumption < 299)
				{
					cout << " > Вам понадобится " << (a_b + b_c) * fuel_consumption << " топлива." << endl;
				}
			}

			else if (fuel < 1501 and fuel > 1000)
			{
				cout << " > Груз до 1500 кг. " << endl;
				fuel_consumption = 7;

				if (a_b * fuel_consumption > 299 or b_c * fuel_consumption > 299)
				{
					cout << " > Самолет не долетит ( нехватка топлива )." << endl;
				}
				else if (a_b * fuel_consumption < 299 or b_c * fuel_consumption < 299)
				{
					cout << " > Вам понадобится " << (a_b + b_c) * fuel_consumption << " топлива." << endl;
				}
			}

			else if (fuel < 2001 and fuel > 1500)
			{
				cout << " > Груз до 2000 кг. " << endl;
				fuel_consumption = 9;

				if (a_b * fuel_consumption > 299 or b_c * fuel_consumption > 299)
				{
					cout << " > Самолет не долетит ( нехватка топлива )." << endl;
				}
				else if (a_b * fuel_consumption < 299 or b_c * fuel_consumption < 299)
				{
					cout << " > Вам понадобится " << (a_b + b_c) * fuel_consumption << " топлива." << endl;
				}
			}

		}

		else if (what == 2)
		{

			int sales_man_one, sales_man_two, sales_man_three;

			cout << "Введите продажи трех менеджеров ( 1 2 3 )";
			
			cin >> sales_man_one >> sales_man_two >> sales_man_three;



		}
	}
}
