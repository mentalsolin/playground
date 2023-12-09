#include <iostream>
using namespace std;

class TelephoneBook {
private:
	char* FIO;
	long tel;
public:
	TelephoneBook() {};
	TelephoneBook(const char* ptrFIO, long long ptel) {
		int length = strlen(ptrFIO); // Узнали длинну переменной
		FIO = new char[length+1]; // Выделили память под переменную
		strcpy_s(FIO, length+1, ptrFIO);
		tel = ptel;
	}

	void print() {
		cout << tel << " " << FIO << endl;
	}
};

int main()
{
	TelephoneBook contact1("Petrov P. P.", 15535359);
	TelephoneBook contact2("Petrov P. P.", 15535359);
	TelephoneBook contact3("Petrov P. P.", 15535359);

	TelephoneBook mas[] = { contact1,  contact2, contact3 };

	mas.print();

}