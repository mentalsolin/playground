#include <iostream>
#include <string>
using namespace std;


void CheckNonBin(string text) {

	int counter0{0}, counter1{0}, counter2{0};
	for (int i = 0; i < text.length(); i++) {
		if (text.at(i) == '0') {
			counter0++;
		}
		if (text.at(i) == '1') {
			counter1++;
		}
		if (text.at(i) == '2') {
			counter2++;
		}
	}
	cout << "0 = " << counter0 << endl;
	cout << "1 = " << counter1 << endl;
	cout << "2 = " << counter2 << endl;
}

int main() {
	string text;

	cout << "Enter string -> ";
	cin >> text;

	CheckNonBin(text);
}