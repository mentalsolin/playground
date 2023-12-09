#include <iostream>
#include <fstream>
using namespace std;

class Tellbook {
private:
	string fio;
	char* fio2;
public:
	Tellbook(string pfio, const char* pfio2) {
		fio = pfio;
		int len = strlen(pfio2); // Длинна
		fio2 = new char[len + 1];
		strcpy_s(fio2, len + 1, pfio2);
	}

	void newfio2() {
		cout << " > Enter new name >> ";
		fseek(stdin, 0, SEEK_END);
		gets_s(fio2, strlen(fio2 - 1));
	}

	char* getfio2() {
		return fio2;
	}

	~Tellbook() {
		delete[] fio2;
	}
};

int main()
{
	Tellbook human("Petrov P P", "Petrov P P");

	human.newfio2();
	cout << human.getfio2();

	ofstream file;
	file.open("test.txt");
	string str = "ewrew";
	file << str;
	file << human.getfio2();
	file.close();
}