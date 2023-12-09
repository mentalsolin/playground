#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// Паттерн Адаптер ( doc to pdf )

class Target { //тот тип данных, который в который, мы должны преобразовать исходный
public:
	// аналог virtual ~Target() {}
	virtual ~Target() = default; // деструктор виртуальный по умолчанию
	virtual string Request() {
		return "Класс Target - default.target";
	}
};

class Adaptee {//тип_данных, который преобразуем
public:
	virtual string AdapteeRequest() {
		string str = "Journal Dev reverse example";
		reverse(str.begin(), str.end());
		return str;
	}
};

class Adapter:public Target {//Адаптер наследуется от Target
private:
	Adaptee* adaptee_;//Адаптер хранит указатель с типом_данных
public:
	Adapter(Adaptee* adaptee) : adaptee_{ adaptee } {} //конструктор с параметрами
	string Request()override {
		string str = this->adaptee_->AdapteeRequest();
		reverse(str.begin(), str.end());
		return "Adapter outupt: " + str;
	}
};

void ClientCode(Target* target) {
	cout << target->Request();
}

class RoundPeg {
private:
	int radius;
public:
	RoundPeg() {}
	RoundPeg(int radius) : radius{ radius } {}
	int getRadius() { return radius; }
};

class RoundHole {
private:
	int radius;
public:
	RoundHole() {}
	RoundHole(int radius): radius{ radius }{}
	int getRadius() { return radius; }
	bool fits(RoundPeg peg) {
		return peg.getRadius() < radius; //Радиус окружности > чем радиус колешка
	}
};

class SquarePeg {
private:
	int width;
public:
	SquarePeg() {};
	SquarePeg(int width) : width( width ) {}
	int getWidth() {
		return width;
	}
};

class SquarPegAdapter: public RoundHole {
private:
	SquarePeg peg;
public:
	SquarPegAdapter() {}
	SquarPegAdapter(SquarePeg peg) {
		this->peg = peg;
	}
	int getRadius() {
		return peg.getWidth() * sqrt(2) / 2;
	}
};

int main()
{
	SquarePeg peg(10);
	SquarPegAdapter squarePegAdapter1(peg);
	RoundHole hole(20);
	cout << hole.fits(squarePegAdapter1.getRadius()) << endl;

	//cout << "\nClient: I cat work only with .target";
	//Target* target = new Target;
	//ClientCode(target);
	//Adaptee* adaptee = new Adaptee;
	//cout << "\nClient: I can't work with .target via Adapter";
	//cout << "\Adaptee: " << adaptee->AdapteeRequest();
	//cout << "\nClient: I can work with .target via Adapter";
	//Adapter* adapter = new Adapter(adaptee);
	//ClientCode(adapter);
}