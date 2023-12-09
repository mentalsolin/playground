#include <iostream>
using namespace std;

struct WashingMachine {
	string model;
	string color;
	string width;
	string height;
	string power;
	string speed;
	string temp;
};

void render(WashingMachine one) {
	cout << "Model: " << one.model << endl;
	cout << "Color: " << one.color << endl;
	cout << "Width: " << one.width << endl;
	cout << "Height: " << one.height << endl;
	cout << "Power: " << one.power << endl;
	cout << "Speed: " << one.speed << endl;
	cout << "Temp: " << one.temp << endl;
}

int main()
{
	WashingMachine wm1 = { "A702-34T", "White", "240 cm", "500 cm", "500kw", "40m", "80c"};

	render(wm1);
}
