#include <iostream>
using namespace std;

void fill(int mas[], int SIZE) {
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		mas[i] = rand() % 10;
		cout << mas[i] << " ";
	}
}

void fillD(double mas[], double SIZE) {
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		mas[i] = rand() % 10 - 0.001;
		cout << mas[i] << " ";
	}
}