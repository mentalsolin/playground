#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    //char mas1[10] = { 'c','a','t','\0' };
    //char mas0[5] = { 't','o','m','\0' };

    // Копирование массива
    //for (int i{}; i < 4; i++)
    //    mas0[i] = mas1[i];

    //for (int i{}; i < 4; i++)
    //    cout << mas0[i];

    // Копирование динамического массива
    //int size1{ 128 };
    //cout << " > Enter size >> ";
    //cin >> size1;
    ///*char* p_str0 = new char[size1];
    //cout << " > Enter string >> ";
    //fseek(stdin, 0, SEEK_END);
    //gets_s(p_str0, size1);*/
    //cin >> p_str0;

    //cout << " > Enter size >> ";
    //cin >> size2;
    ///*char* p_str1 = new char[size1];
    //cout << " > Enter string >> ";
    //fseek(stdin, 0, SEEK_END);
    //gets_s(p_str1, size1);

    //int lengthString{};
    //int lengthSpace{};


    //strcpy_s(p_str0, size1, p_str1);
    //lengthString = strlen(p_str1);

    //cout << "\n > First string > " << p_str0 << "\n > Second string > " << p_str1 << "\n > Lenght string > " << lengthString;
    //
    //strcat_s(p_str0, size1, p_str1);
    //cout << "\n\n > Stirng concationation > " << p_str0;*/

    //char* filename = new char[128];
    //cout << "\n\n > Enter filename >> ";
    //fseek(stdin, 0, SEEK_END);
    //gets_s(filename, size1);

    //if (strchr(filename, '.')) {
    //    cout << " > Name has extension\n";
    //}
    //else {
    //    cout << " > Name has no extension\n";
    //    strcat_s(filename, size1, ".txt");
    //}

    //cout << " > Name of file > " << filename << endl;
    //delete[] filename;

    //
    //char arr[] = { "Minecraft" };
    //char* p_arr = strchr(arr, 'i');
    //if (p_arr == strchr(arr, 'i')) {
    //    cout << "\nLetter 'i' found";
    //}
    //else {
    //    cout << "\nLetter 'i' didn't found";
    //}


    //cout << " > Enter filename >> ";
    //char* filename1 = new char[128];
    //char* p{};
    //fseek(stdin, 0, SEEK_END);
    //gets_s(filename1, size1);

    //cout << " > Name of file > " << filename1 << endl;
    //strupr(filename1);
    //p = strstr(filename1, ".txt");
    //if (p != 0) {
    //    cout << " > Name has extension\n";
    //}
    //else {
    //    p = strchr(filename1, '.');
    //    if (p) {
    //        *p = NULL; // Удаляем любое дргуое расширение
    //        strcat_s(filename1, size1,".exe");
    //    }
    //}
    //cout << " > Name of file > " << filename1 << endl;
    //delete[]filename1;

    //char stringg[] = { "SADDASs2 z13213,,,   ,....///''';;  'l;l,sdmfkahjsw  ofh4n423erf  ef#%%^&" };
    //cout << " > Name of file > " << stringg << endl;
    //strupr(filename1);
    //




    //for (int i = 0; i < 73; i++) {

    //    cout << stringg[i];
    //    Sleep(50);
    //    char a = '34';
    //    int counter{30};
    //    if (stringg[i] == a) {
    //        cout << "| Found  >> " << stringg[i];
    //        strcat_s(a, size1, counter);
    //        counter++;
    //    }
    //    


    //    p = strstr(stringg, ".txt");

    //}





    //cout << " > Name of file > " << stringg << endl;
    //delete[]stringg;





    int size3{ 128 };
    char* arr2 = new char[size3];
    char* p{};
    cout << " > Enter name of file >> ";
    fseek(stdin, 0, SEEK_END);
    gets_s(arr2, size3);

    for (int i = 0; i < size3; i++) {
        if (arr2[i] == ' ') {
            arr2[i] = '\t';
        }
    }
    cout << " > String with tab > " << arr2;


















    //gets_s(p_str0, size);
}