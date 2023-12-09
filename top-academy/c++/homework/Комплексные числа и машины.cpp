#include <iostream>
using namespace std;

struct Complex {
	int a;
	int b;
};

void multiply(Complex num1, Complex num2);

struct Car {
	string model;
	int lenght;
	int clearance;
	int seat_height;
	int engine_volume;
	int power_engine;
	int wheel_diameter;
	string color;
	int gearbox;
};

void render(Car car) {
	cout << "Model: " << car.model << endl;
	cout << "Lenght: " << car.lenght << endl;
	cout << "clearance: " << car.clearance << endl;
	cout << "seat_height: " << car.seat_height << endl;
	cout << "engine_volume: " << car.engine_volume << endl;
	cout << "power_engine: " << car.power_engine << endl;
	cout << "wheel_diameter: " << car.wheel_diameter << endl;
	cout << "color: " << car.color << endl;
	cout << "gearbox: " << car.gearbox << endl << endl;
}

int main()
{
	Complex num1 = { 7, 3 };
	Complex num2 = { 6, 2 };

	cout << "Z1 = 7 + 3i\nZ2 = 6 + 2i\nComplex number: ";
	multiply(num1, num2);
	cout << endl;

	Car car1 = { "Car1", 20, 5, 5, 6, 9, 8, "blue", 3 };
	Car car2 = { "Car2", 60, 5, 5, 7, 4, 8, "white", 5 };
	Car car3 = { "Car3", 20, 5, 5, 3, 7, 8, "blue", 6 };
	Car car4 = { "Car4", 30, 5, 4, 7, 4, 8, "blue", 5 };
	Car car5 = { "Car5", 20, 5, 7, 7, 4, 8, "red", 9 };

	render(car1);
	render(car2);
	render(car3);
	render(car4);
	render(car5);
}

void multiply(Complex num1, Complex num2) {
	int z1 = num1.a + num2.a;
	int z2 = num1.b + num2.b;
	cout << z1 + z2;
}