#include <iostream>

using namespace std;

int main()
{
	int mas1[5]{ 4,2,42,4242 };
	int mas2[5]{ 4,2,42,42 };
	
	int* ptr1 = mas1;
	int* ptr2 = mas2;

	int i{}, k{}; // для индексов

	for (i = 3, k = 0; i >= 0; i--, k++) {
		ptr2[i] = ptr1[k];
	}
	for (int i = 0; i <= 3; i++) {
		cout << mas2[i] << " ";
		ptr1 = ptr2 + i;
	}
	cout << endl;
}
