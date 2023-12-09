#include <iostream>
using namespace std;

class Math {
private:
	float a;
	float b;
	float c;

public:

	Math(float pa, float pb) {
		a = pa;
		b = pb;
		c = 0;
	}

	Math(float pa, float pb, float pc) {
		a = pa;
		b = pb;
		c = pc;
	}

	void triangle1() {
		float s;
		float p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << s;
	}

	void rectangle1() {
		cout << a * b;
	}
	
	void rhombus1() {
		cout << a * b << " m2";
	}
};

int main()
{
	Math figura1(6, 8, 10);
	Math figura2(3, 5);
	Math figura3(14, 66);

	cout << "Triangle = A = 6, B = 8, C = 10" << endl;
	figura1.triangle1();
	cout << endl << endl;
	cout << "Rectangle = A = 4, B = 5" << endl;
	figura2.rectangle1();
	cout << endl << endl;
	cout << "Rhombus = A = 14, H = 66" << endl;
	figura3.rhombus1();
}
