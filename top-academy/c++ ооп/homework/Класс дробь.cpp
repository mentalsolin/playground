#include <iostream>
using namespace std;

class Drob {
private:
	int numen;
	int denum;
public:
	int setNumen(int pNumen) {
		numen = pNumen;
	}
	int setDenum(int pDenum) {
		numen = pDenum;
	}

	Drob(){};

	Drob(int pNumen, int pDenum) {
		numen = pNumen;
		denum = pDenum;
	}

	Drob summa(Drob drob2) {
		Drob resTemp;
		resTemp.numen = numen + drob2.numen;
		resTemp.denum = denum;
		return resTemp;
	}

	Drob raznost(Drob drob2) {
		Drob resTemp;
		resTemp.numen = numen - drob2.numen;
		resTemp.denum = denum;
		return resTemp;
	}

	Drob multy(Drob drob2) {
		Drob resTemp;
		resTemp.numen = numen * drob2.numen;
		resTemp.denum = numen * drob2.denum;
		return resTemp;
	}

	void print(Drob drob1, Drob drob2, char sym) {
		cout << drob1.numen << "   " << drob2.numen << "   " << numen << endl;
		cout << "- " << sym << " - = -" << endl;
		cout << drob1.denum << "   " << drob2.denum << "   " << denum << endl;
	}
};

int main()
{
	Drob drob1(2, 3);
	Drob drob2(4, 3);

	Drob resDrob = drob1.summa(drob2);
	resDrob.print(drob1, drob2, '+');
	cout << endl;
	Drob resDrob1 = drob1.raznost(drob2);
	resDrob1.print(drob1, drob2, '-');
	cout << endl;
	Drob resDrob2 = drob1.multy(drob2);
	resDrob.print(drob1, drob2, '*');
}