#include <iostream>
#include <string.h>

using namespace std;

//int month_name(int);

int main()
{
    /*
    //const int size = 4;
    //
    //char mas[size] = { 'R', 'a', 't', '\0' };

    //for (int i = 0; i < size; i++)
    //    cout << mas[i];

    //char mas1[] = "Dog";
    //mas1[3] = '\0';
    //cout << endl << mas1;

    //const char* p_message{ nullptr }; // Нулевой указатель
    //p_message = "Hello,";

    //char privet[] = "World!";
    //char* p_privet = privet;

    //cout << endl << p_message << " " << p_privet << endl;

    //int i = 0;
    //while (*(p_message + i) != '\0')
    //    cout << *(p_message + i++);

    //i = 0;
    //while (*(p_privet + i) != '\0')
    //    cout << *(p_privet + i++);
    */
    /*
    const int n = 2;
    const int y = 0;

    const char* name[] = { "none", "January", "Febuary",
                            "March", "April", "May",
                            "June", "July", "August",
                            "September", "October",
                            "November", "December" };

    for (int i = y; i < n; i++) {
        cout << " > Month number " << i << " - " << name[month_name(i)] << "\n";
    }

    const char* p_str = "Rat";
    int lenght = strlen(p_str);
    cout << "\n > String: " << p_str << " lenght string: " << lenght << endl;

    char p_user_str[128];
    cin >> p_user_str;
    gets_s(p_user_str[], 128);
    cout << "\n > String: " << p_user_str << " lenght string: " << strlen(p_user_str) << endl;
    */

    char str1[128] = "tetris - ";
    char str2[128] = "World Of Tanks";

    strcat_s(str1, 128, str2);
    cout << str1;
}

//int month_name(int k) {
    //if (k < 1 || k > 12) {
    //    return 0;
    //}
    //else {
    //    return k;
    //}
//}