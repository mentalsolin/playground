#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    srand(time(NULL));

    char array[11] = "0123456789";
    char ch;
    string num;

    while (true) {
        cout << "do you want to start the game? (y/n): ";
        cin >> ch;
        if (ch == 'y' || ch == 'Y') {
            system("cls");
            num = "";
            Sleep(300);

            cout << '\a' << endl;
            num += array[(rand() % 3) + 1];
            cout << ":::" << num << ":::" << endl;
            Sleep(300);
            system("cls");
            cout << '\a' << endl;
            num += array[(rand() % 3) + 1];
            cout << ":::" << num << ":::" << endl;
            Sleep(300);
            system("cls");
            cout << '\a' << endl;
            num += array[(rand() % 3) + 1];
            cout << ":::" << num << ":::" << endl;

            if (num == "111" || num == "222" || num == "333" ||
                num == "444" || num == "555" || num == "666" ||
                num == "777" || num == "888" || num == "999")
                cout << "Win!" << endl;
            else
                cout << "Lost!" << endl;
        }
    }
}