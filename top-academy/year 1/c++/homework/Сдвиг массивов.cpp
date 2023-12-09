#include <iostream>
using namespace std;


void nplus(unsigned long long  num1, unsigned long long  num2) {
	cout << num1 * num2;
}

int main()
{
	unsigned long long  num1, num2;

	for (unsigned long long  i = 0; i < 100000000000; i++) {
		for (unsigned long long  j = 0; j < 10000000000; j++) {
			cout << "Enter 2 numbers: ";
			num1 = j * j * j;
			num2 = j * j * j;

			nplus(num1, num2);
			cout << endl;
		}
	}
}