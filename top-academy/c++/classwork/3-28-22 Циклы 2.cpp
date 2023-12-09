using namespace std;
#include <iostream>
#include "windows.h"

int main()
{
	system("Color 1F");

	setlocale(LC_ALL, "");

	//int r, c;
	//cout << " > Введите размер (высота ширина) >> ";
	//cin >> r >> c;

	/*for (int i = 0; i <= r; i++)
	{
		for (int j = 0; j <= c; j++)
		{
			if (i == 0 || i == r || j == 0 || j == c)
			{
				cout << "* ";
				Sleep(100);
			}
			else {
				cout << "  ";
			}
		}*/

		//	Sleep(100);
		//	cout << endl;
		//}
		//int row{ 10 }, col{ 10 };

		/*for (int i = 1; i <= row; i++)
		{
			for (int j = 1; j <= col; j++)
			{
				if (i == 1 || i == col)
				{
					cout << "*";
					Sleep(100);
				}
				else if (j == 1 or j == row) {
					cout << "*";
				}
			}

			Sleep(100);
			cout << endl;
		}*/


		//for (int i = 1; i <= 10; i++)
		//{
		//	for (int j = 1; j <= i; j++)
		//	{
		//		if (i == 20 || i == j || j == 1 || j == i)
		//		{
		//			cout << "* ";
		//		}
		//		else
		//		{
		//			cout << "  ";
		//		}
		//	}
		//	cout << endl;
		//}

		//cout << endl;

		//for (int i = 20; i >= 10; i--)
		//{
		//	for (int j = 10; j <= i; j++)
		//	{
		//		if (i == 20 || i == j || j == j || j == i)
		//		{
		//			cout << "  ";
		//		}
		//		else
		//		{
		//			cout << "* ";
		//		}
		//	}
		//	cout << endl;
		//}


		/*for (int i = 0; i <= 20; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				if (i == 20 || i == 1 || j == 20 || j == 9)
				{
					cout << "*";

				}
				else
				{
					cout << " ";

				}
			}
			cout << endl;
		}*/
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (i >= 1)
				{
					cout << "___***";
				}
				else {
					cout << "***___";
				}
			}

			cout << endl;
		}
	
}