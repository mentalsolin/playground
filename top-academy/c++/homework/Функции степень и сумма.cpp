#include <iostream>

using namespace std;

void powFunction(int num1, int num2);
void sumFunction(int num1, int num2);


int main()
{
	int num1{};
	int num2{};

	cout << "Pow function.\nEnter numbers >> ";
	cin >> num1 >> num2;
	powFunction(num1, num2);

	cout << "\nSum function.\nEnter numbers >> ";
	cin >> num1 >> num2;
	sumFunction(num1, num2);
}

void powFunction(int num1, int num2) {
	cout << pow(num1, num2);
}

void sumFunction(int num1, int num2) {
	int counter = num1;

	for (int i = num1 + 1; i < num2 + 1; i++) {
		counter+=i;
	}
	cout << counter;
}