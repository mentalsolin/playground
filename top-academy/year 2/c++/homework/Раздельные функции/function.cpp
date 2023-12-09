#include <iostream>
using namespace std;

void arrayFill(int mas[]) {
	
	for (size_t i = 0; i < 19; i++)
	{
		mas[i] = rand() % 10;
	}
}

void arrayRender(int mas[]) {
	for (size_t i = 0; i < 19; i++)
	{
		cout << mas[i] << " ";
	}
}

void arrayMin(int mas[]) {
	int min{ 0 };

	for (size_t i = 0; i < 19; i++)
	{
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	cout << "Min number is: " << min;
	cout << endl;
	for (size_t i = 0; i < 19; i++)
	{
		cout << mas[i] << " ";
	}
}

void arrayMax(int mas[]) {
	int max{ 0 };

	for (size_t i = 0; i < 19; i++)
	{
		if (mas[i] > max) {
			max = mas[i];
		}
	}
	cout << "Max number is: " << max;
	cout << endl;
	for (size_t i = 0; i < 19; i++)
	{
		cout << mas[i] << " ";
	}
}

void selectionSort(int a[], int n) {
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	cout << endl;
	for (size_t i = 0; i < 19; i++)
	{
		cout << a[i] << " ";
	}
}

void arrayChange(int mas[]) {

	int p;
	int v;

	for (size_t i = 0; i < 19; i++)
	{
		cout << mas[i] << " ";
	}

	cout << "\nEnter position >> ";
	cin >> p;
	cout << "Enter value >> ";
	cin >> v;

	mas[p] = v;
	
	for (size_t i = 0; i < 19; i++)
	{
		cout << mas[i] << " ";
	}
}