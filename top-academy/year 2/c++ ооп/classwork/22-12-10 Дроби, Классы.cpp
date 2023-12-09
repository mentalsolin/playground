#include <iostream>
using namespace std;

//class Drob {
//private:
//	int numen;
//	int denum;
//public:
//	int setNumen(int pNumen) {
//		numen = pNumen;
//	}
//	int setDenum(int pDenum) {
//		numen = pDenum;
//	}
//
//	Drob(){};
//
//	Drob(int pNumen, int pDenum) {
//		numen = pNumen;
//		denum = pDenum;
//	}
//
//	Drob summa(Drob drob2) {
//		Drob resTemp;
//		resTemp.numen = numen + drob2.numen;
//		resTemp.denum = denum;
//		return resTemp;
//	}
//
//	Drob raznost(Drob drob2) {
//		Drob resTemp;
//		resTemp.numen = numen - drob2.numen;
//		resTemp.denum = denum;
//		return resTemp;
//	}
//
//	Drob multy(Drob drob2) {
//		Drob resTemp;
//		resTemp.numen = numen * drob2.numen;
//		resTemp.denum = numen * drob2.denum;
//		return resTemp;
//	}
//
//	void print(Drob drob1, Drob drob2, char sym) {
//		cout << drob1.numen << "   " << drob2.numen << "   " << numen << endl;
//		cout << "- " << sym << " - = -" << endl;
//		cout << drob1.denum << "   " << drob2.denum << "   " << denum << endl;
//	}
//};

class Student {
private:
	string fio;
	string date;
	string phone;
	string city;
	string country;
	string edu;
	string eduLocation;
	string group;
public:
	inline void setfio(string pfio) {
		fio = pfio;
	}

	inline void setDate(string pDate) {
		date = pDate;
	}

	inline void setPhone(string pPhone) {
		phone = pPhone;
	}

	inline void setCity(string pCity) {
		city = pCity;
	}

	inline void setCountry(string pCountry) {
		country = pCountry;
	}

	inline void setEdu(string pEdu) {
		edu = pEdu;
	}

	inline void setEduLocation(string pEduLocation) {
		eduLocation = pEduLocation;
	}

	inline void setGroup(string pGroup) {
		group = pGroup;
	}




	string getfio() {
		return fio;
	}

	string getDate() {
		return date;
	}

	string getPhone() {
		return phone;
	}

	string getCity() {
		return city;
	}

	string getCountry() {
		return country;
	}

	string getEdu() {
		return edu;
	}

	string getEduLocation() {
		return eduLocation;
	}

	string getGroup() {
		return group;
	}

	Student() {};

	Student(string pFio, string pDate, string pPhone, string pCountry, string pCity, string pEdu, string pEduLocation, string pGroup) {
		fio = pFio;
		date = pDate;
		phone = pPhone;
		city = pCity;
		country = pCountry;
		edu = pEdu;
		eduLocation = pEduLocation;
		group = pGroup;
	}

	void print() {
		cout << "Student stats";
		cout << "\nStudent name: " << fio;
		cout << "\nStudent date: " << date;
		cout << "\nStudent phone: " << phone;
		cout << "\nStudent from: " << country;
		cout << "\nStudent city: " << city;
		cout << "\nStudent edu: " << edu;
		cout << "\nEdu location: " << eduLocation;
		cout << "\nStudent group: " << group << endl;
	}
};

int main()
{
	Student stud1("Anton A. I.", "10/12/2007", "+11424242", "Denver", "USA", "NY EDU", "New York", "B-5424");

	stud1.print();
	cout << endl;
	stud1.setCountry("New York");
	cout << endl;
	stud1.print();




	//Drob drob1(2, 3);
	//Drob drob2(4, 3);

	//Drob resDrob = drob1.summa(drob2);
	//resDrob.print(drob1, drob2, '+');
	//cout << endl;
	//Drob resDrob1 = drob1.raznost(drob2);
	//resDrob1.print(drob1, drob2, '-');
	//cout << endl;
	//Drob resDrob2 = drob1.multy(drob2);
	//resDrob.print(drob1, drob2, '*');


}