#include <iostream>

using namespace std;

void triangleA(int size);
void triangleB(int size);
void triangleC(int size);
void triangleD(int size);

int main()
{
	const int size = 10;

	triangleA(size);
	triangleB(size);
	triangleC(size);
	triangleD(size);
}

void triangleA(int size) {
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "# ";
		}
		cout << endl;
	}
	cout << endl;
}

void triangleB(int size) {
	for (int i = size; i >= 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << "# ";
		}
		cout << endl;
	}
	cout << endl;
}			  
			  
void triangleC(int size) {
	for (int i = 1; i <= size; i++) {
		for (int k = size - i; k > 0; k--) {
			cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "# ";
		}
		cout << endl;
	}
	cout << endl;
}

void triangleD(int size) {
	for (int i = size; i >= 1; i--) {
		for (int k = size - i; k > 0; k--) {
			cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "# ";
		}
		cout << endl;
	}
	cout << endl;
}