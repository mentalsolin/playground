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

			float aero_dist, kiometer, sec, min, hour;
			int aero_minS, aero_secS;
			char dot;

			cout << " > Задание 1 >> Пользователь вводит с клавиатуры расстояние до аэропорта и время, за которое нужно доехать.";
			cout << " > Введите расстояние до аэропорта в метрах >> ";
			cin >> aero_dist;

			cout << " > Введите время до аэропорта >> ";
			cin >> aero_minS >> dot >> aero_secS;

			kiometer = aero_dist / 1000;

			sec = aero_minS * 60 + aero_secS;
			min = sec / 60;
			hour = min / 60;

			if (aero_minS > 0)
			{
				cout << " > Что бы доехать до аеропорта за " << aero_minS << " минут " << aero_secS << " секунд " << "вам нужно двигатся со скоростью " << kiometer / hour << " км/ч" << endl << endl;
			}
			else {
				cout << " > Что бы доехать до аеропорта за " << aero_secS << " секунд " << "вам нужно двигатся со скоростью " << kiometer / hour << " км/ч" << endl << endl;
			}

		}

		else if (what == 2) // Иначе если выбранно 2 запускать задание.
		{

			float phone_call_min;
			int hourS, minS, secS;

			cout << " > Задание 2 >> Пользователь вводит с клавиатуры время начала и время завершения телефонного разговора ( часы, минуты и секунды )." << endl;
			cout << " > Введите время разговора 1 минута - 30 копеек ( часы минуты секунды )";
			cin >> hourS >> minS >> secS;

			phone_call_min = hourS * 60 + minS + (secS / 60);

			cout << " > Вы звонили " << hourS << " часов " << minS << " минут " << secS << " секунд " << "стоимость разговора >> " << phone_call_min * 0.30 << " рублей" << endl;

		}

		else if (what == 3) // Иначе если выбранно 4 запускать задание.
		{

			float ai92_cost, ai95_cost, ai98_cost, dist, consumption;
			int ai92, ai95, ai98;

			cout << " > Задание 3 >> Пользователь вводит с клавиатуры расстояние, расход бензина на 100 км и стоимость трех видов бензина. Вывести на экран сравнительную таблицу со стоимостью поездки на разных видах бензина." << endl;
			cout << " > Введите ( расстояние расход ) ";
			cin >> dist >> consumption;

			cout << " > Введите стоимость бензина ( АИ-92 АИ-95 АИ-98 ) ";
			cin >> ai92 >> ai95 >> ai98;

			ai92_cost = (dist / 100) * consumption * ai92;
			ai95_cost = (dist / 100) * consumption * ai95;
			ai98_cost = (dist / 100) * consumption * ai98;

			cout << " > Стоимость бензина чтобы проехать " << dist << " км при расходе" << consumption << endl;

			cout << " > АИ-92 - " << ai92_cost << "| АИ-95 - " << ai95_cost << "| АИ-98 - " << ai98_cost << endl;

		}
	}
}