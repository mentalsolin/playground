#include <iostream>
#include "function.h"
using namespace std;

struct Animal
{
	string type;
	string name;
	string nickname;
};

int main()
{
	Animal animal1;

	animal1.type = "Dog";
	animal1.name = "Bill";
	animal1.nickname = "B";
	
	cout << animal1.type;
	//showAnimal(animal1.type, animal1.name, animal1.nickname);
};

