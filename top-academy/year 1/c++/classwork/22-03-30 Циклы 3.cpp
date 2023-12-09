#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	system("Color 1F");

	/*int N = 5;

	for (int i = 0; i <= 12; i++)
	{
		for (int j = 0; j <= 12; j++)
		{
			if (i == j)
			{
				cout << "+ ";
			}
			else
			{
				cout << "# ";
			}
		}
		cout << endl;
	}

	cout << endl;

	int size = 5;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i + j == size - 1)
			{
				cout << "+ ";
			}
			else
			{
				cout << "# ";
			}
		}
		cout << endl;
	}*/

	/*int start_range{}, end_range{};
	cout << "Введите начало и конец диапозона >> " << start_range << end_range;
	cin >> start_range >> end_range;

	int counter = start_range;

	int devider{ 1 };
	for (counter; counter <= end_range; counter++)
	{
		if (devider > 1) {
			devider = 1;
		}
		cout << "Делитель: " << counter << " - ";
		for (devider; devider <= counter; devider++) {
			if (counter % devider == 0) {
				cout << devider << " ";
			}
			cout << endl;
		}
	}*/
	int counter{}, a{ 2 }, b{ 100 };

	for (int i = a; i <= b; i++) {
		for (int j = i - 1; j > i; j--) {
			if (1 % j == 0) {
				counter++;
			} if (counter == 2) {
				cout << i << " "; 
			}
		} 
	} 
}
