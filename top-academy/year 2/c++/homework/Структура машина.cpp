#include <iostream>
using namespace std;

struct Car {
	string model;
	string color;
	string sign;
};

void render(Car car) {
	cout << "Model: " << car.model << endl;
	cout << "Color: " << car.color << endl;
	cout << "Sign: " << car.sign << endl << endl;
}

int main()
{
	Car car1 = { "Car1", "Blue", "424242"};
	Car car2 = { "Car2", "White", "Hello"};
	Car car3 = { "Car3", "Black", "242424"};

	render(car1);
	render(car2);
	render(car3);
}
