#include <iostream>
#include "windows.h"
using namespace std;

// Аругменты по умолчанию

void Star(int counter=5, char symbol='*') {
    for (int i = 0; i < counter; i++)
        cout << symbol;
    cout << endl;
}

void myFunction() {
    static int a{ 0 }; // Сохраняет значение
    a++;

    cout << a << " ";
}

void clr1() {
    system("color 04");
}

void clr2() {
    Sleep(1000);
    system("color 08");
}

void clr3() {
    Sleep(1000);
    system("color 02");
}

void boat(){
    system("color 04");

    cout << "___________________¶¶¶8¶¶_________________________" << endl;
    clr1();
    cout << "_____________¶¶¶¶¶¶¶¶¶¶¶¶_________________________" << endl;
    clr2();
    cout << "_____________¶¶¶¶8¶¶¶¶¶¶¶_________________________" << endl;
    clr3();
    cout << "______________________¶¶__________________________" << endl;
    clr1();
    cout << "_____________________¶8¶ ¶8¶______________________" << endl;
    clr2();
    cout << "_____________________¶8¶ ¶888¶____________________" << endl;
    clr3();
    cout << "_____________________¶8¶__8¶¶8¶¶__________________" << endl;
    clr1();
    cout << "__________________¶¶ ¶8¶__¶88¶¶8¶_________________" << endl;
    clr2();
    cout << "__________________¶8¶¶8¶___¶8888¶¶________________" << endl;
    clr3();
    cout << "_________________¶8¶¶¶¶¶___¶888¶88¶¶______________" << endl;
    clr1();
    cout << "_______________¶88¶¶¶¶8¶____¶8¶88¶¶¶¶_____________" << endl;
    clr2();
    cout << "______________¶¶8¶¶¶¶¶¶¶____¶8¶¶¶¶¶¶¶¶____________" << endl;
    clr3();
    cout << "_____________¶88888¶ ¶¶¶____¶88¶8¶¶888¶¶__________" << endl;
        clr1();
    clr2();

cout << "____________¶8888¶8¶ ¶¶¶____¶88888¶¶8888¶_________" << endl;
        clr1();
    clr2();
    clr3();
cout << "___________¶888¶888¶ ¶8¶____¶8¶¶88¶888¶88¶________" << endl;
        clr1();
    clr2();

cout << "__________¶8¶888888¶ ¶8¶____¶8¶88¶8888$888¶_______" << endl;
        clr1();
    clr2();

cout << "_________¶88¶¶88888¶ ¶8¶____¶88¶88¶¶¶¶888¶8¶______" << endl;
        clr1();
    clr2();

cout << "_______¶8888¶¶888¶¶¶ ¶8¶_____8888¶8¶¶8888¶¶8¶_____" << endl;
        clr1();
    clr2();

cout << "______¶88888¶8¶¶¶¶8¶ ¶8¶____¶¶888¶¶¶88¶8¶888¶_____" << endl;
        clr1();
    clr2();

cout << "____¶¶888¶¶¶8¶8¶¶88¶ ¶¶¶____¶88888888¶8¶88888_____" << endl;
        clr1();
    clr2();

cout << "__¶¶88¶88888888888¶¶ ¶8¶___¶88888888¶88¶88¶88_____" << endl;
        clr1();
    clr2();

cout << " ¶8¶¶¶¶¶¶ ¶¶¶88888¶¶ ¶8¶___88¶¶8¶¶¶¶¶¶¶¶¶¶¶¶¶_____" << endl;
        clr1();
    clr2();

cout << "¶¶____________¶¶¶8¶¶ ¶¶¶__¶88¶¶____________¶¶__¶¶ " << endl;
        clr1();
    clr2();

cout << "888¶¶¶¶¶________¶¶8¶ ¶¶¶__¶¶¶___________¶¶¶¶¶¶¶8¶¶" << endl;
        clr1();
    clr2();

cout << " ¶¶¶888¶¶88¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶ ¶¶¶¶¶¶¶¶888¶¶¶¶___" << endl;
        clr1();
    clr2();

cout << "____¶¶8¶¶8888888¶888888888$8888¶8888888888¶_______" << endl;
        clr1();
    clr2();

cout << "_____¶¶8888¶¶8888888888¶888¶¶88¶¶88¶88888¶________" << endl;
        clr1();
    clr2();

cout << "________¶¶¶¶¶¶888¶¶¶88888¶8888888¶8¶¶¶¶¶__________" << endl;
        clr1();
    clr2();

cout << "______________888¶¶¶¶88¶¶8¶8¶¶¶8¶¶________________" << endl;
    Sleep(1000);
    system("color 05");
    Sleep(1000);
    system("color 0F");
    Sleep(1000);
    system("color 0F");
    Sleep(1000);
    system("color 03");
    Sleep(1000);
    system("color 0F");
    Sleep(1000);
    system("cls");
}


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void massiv() {
    
    int mas[10][10];
    int max = mas[0][0], min = mas[0][0], max_index{ 0 }, max_index2{ 0 }, min_index{ 0 }, min_index2{ 0 };

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mas[i][j] = rand() % 10;

        
            if (mas[i][j] > max) {
                max = mas[i][j];

                max_index = i;
                max_index2 = j;
            }

            if (mas[i][j] < min) {
                min = mas[i][j];

                min_index = i;
                min_index2 = j;
            }
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }


    cout << "max = " << max << " index: " << max_index << max_index2 << endl;
    cout << "min = " << min << " index: " << min_index << min_index2 << endl;
}



int main()
{
    srand(time(NULL));

    massiv();

    //for (int i = 0; i < 255; i++) {
    //    SetConsoleTextAttribute(hConsole, i);
    //    cout << i << " I want to be nive tobay"<< endl;
    //    Sleep(100);
    //}


    //for (int i = 0; i < 20; i++) {
    //    myFunction();
    //}

    //cout << endl;

    //boat();

    //Star();
    //Star(6);
    //Star(18, '&');
}
