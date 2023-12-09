#include <iostream>
#include <windows.h>

using namespace std;

char* mystrstr(char* filename1, char* filename2) {
	char* filename3 = new char[128];
	char ne_nash[12]{ 'N', 'e', ' ', 'n', 'a', 'i', 'd', 'e', 'n', 'o', '!', '\0' };
	int num = 0, pr = 0, nenash;
	for (int i = 0; i < strlen(filename1); i++) {
		if (filename1[i] != ' ') {
			if (filename1[i] == filename2[num]) {
				pr++;
			}
			num++;
		}
		else {
			if (pr == num) {
				break;
			}
			num = 0, pr = 0;
		}
	}
	if (pr != num) {
		for (int i = 0; i < 12; i++) {
			filename3[i] = ne_nash[i];
		}
	}
	else {
		for (int i = 0; i < strlen(filename2); i++) {
			filename3[i] = filename2[i];
		}
		filename3[strlen(filename2)] = '\0';
	}
	return filename3;
}


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	cout << "Sozdat' funkciyu :" << endl;
	cout << "1) char* mystrstr(char* str1, char* str2); — funkciya" << endl;
	cout << "osuschestvlyaet poisk podstroki str2 v stroke str1." << endl;
	cout << "Funkciya vozvraschaet ukazatel' na pervoe vhojdenie" << endl;
	cout << "podstroki str2 v stroku str1, v protivnom sluchae 0." << endl;

	cout << endl;

	int const SIZE = 128;

	bool a = 0;

	char* filename1 = new char[SIZE];
	char* filename2 = new char[SIZE];

	cout << "Vvedite stroku: ";
	fseek(stdin, 0, SEEK_END);
	cin.get(filename1, SIZE);

	cout << "Vvedite iskomoe slovo: ";
	fseek(stdin, 0, SEEK_END);
	cin.get(filename2, SIZE);

	cout << "Iskomoe slovo: " << mystrstr(filename1, filename2);


}