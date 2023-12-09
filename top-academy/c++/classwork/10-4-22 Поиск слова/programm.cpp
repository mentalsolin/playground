#include <iostream>
#include "function.h"
using namespace std;

#define DUBLE

int main()
{
	srand(time(NULL));
	const int SIZE{ 10 };
#ifdef INTEGER
	int mas[SIZE];
	fill(mas, SIZE);
#else
	double masD[SIZE];
	fillD(masD, SIZE);
	cout << "\a";
	cout << "\a";
	cout << "\a";
	cout << "\a";
	cout << "\a";
	cout << "\a";
#endif
};

