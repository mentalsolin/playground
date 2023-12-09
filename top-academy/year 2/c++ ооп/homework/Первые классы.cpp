#include <iostream>

using namespace std;

class Plus {
private:
	int a{};
	int b{};

public:

	void setA(int aP) {
		a = aP;
	}

	void setB(int bP) {
		b = bP;
	}

	int getSumAB() {
		return a + b;
	}
};

class Minus {
private:
	int a{};
	int b{};

public:

	void setA(int aP) {
		a = aP;
	}

	void setB(int bP) {
		b = bP;
	}

	int getSumAB() {
		return a - b;
	}
};

void plusFunc(int plusAB);

int main()
{
	int counter{};

	for (int i = 0; i < 2; i++) {
		plusFunc(counter);
		counter++;
	}
	


	// int a, b;
	// Minus minusAB;

	// cout << "A - B = C > Enter A, B >> ";
	// cin >> a >> b;

	// if (a > b) {
	// 	minusAB.setA(a);
	// 	minusAB.setB(b);

	// 	cout << a << " - " << b << " = " << minusAB.getSumAB() << endl;
	// }
	// else {
	// 	minusAB.setA(b);
	// 	minusAB.setB(a);

	// 	cout << b << " - " << a << " = " << minusAB.getSumAB() << endl;
	// }
}

void plusFunc(int plusAB) {
	int a, b;

	Plus plusAB;

	cout << "A + B = C > Enter A, B >> ";
	cin >> a >> b;

	plusAB.setA(a);
	plusAB.setB(b);

	cout << a << " + " << b << " = " << plusAB.getSumAB() << endl << endl;
}