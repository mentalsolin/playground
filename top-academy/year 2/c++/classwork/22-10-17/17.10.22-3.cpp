#include <iostream>
using namespace std;

class Student {
private:
	string group;
	char* fio;
public:

	Student(const char* pfio, string pgroup);

	void newfio();

	char* getfio();

	void setGroup(string pgroup);

	void getGroup();

	~Student();
};

int main()
{
	Student stud1("Alex", "B-16");
	
	cout << stud1.getfio();
	cout << endl;

	stud1.setGroup("gfdgfd");
	stud1.getGroup();
}

Student::Student(const char* pfio, string pgroup) {
	int len = strlen(pfio); // Длинна
	fio = new char[len + 1];
	strcpy_s(fio, len + 1, pfio);

	group = pgroup;
}

void Student::newfio() {
	cout << " > Enter new name >> ";
	fseek(stdin, 0, SEEK_END);
	gets_s(fio, strlen(fio - 1));
}

char* Student::getfio() {
	return fio;
}

void Student::setGroup(string pgroup) {
	group = pgroup;
}

void Student::getGroup() {
	cout << group;
}

Student::~Student() {
	delete[] fio;
}