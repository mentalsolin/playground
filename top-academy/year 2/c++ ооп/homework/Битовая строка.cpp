#include <iostream>
#include <string>
using namespace std;

void CheckNonBin(string text) {
	bool stop = false;
	for (int i = 0; i < text.length(); i++) {
		if (text.at(i) == '0' || text.at(i) == '1') {
		}
		else {
			stop = true;
			cout << "Bad -> " << text;
			break;
		}
	}
	if (stop != true) {
		cout << "Passed -> " << text;
	}
}

int main() {
	string text;

	cout << "Enter string -> ";
	cin >> text;

	CheckNonBin(text);
}

