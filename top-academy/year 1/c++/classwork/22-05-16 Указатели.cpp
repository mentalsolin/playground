#include <iostream>

#define print cout <<

using namespace std;

int main()
{
    //int* ptr; // объявление переменной
    //int* ptr1 {nullptr}; // инициализация переменной

    //int var{ 42 };
    //ptr = &var;

    //print "Adress: " << ptr << " " << &var << endl;
    //print "Value: " << *ptr << " " << var << endl;
    //

    //int Arr[5]{ 4,2,42,4242 };
    //int* ptr2 = &Arr[0];
    //int* ptr3 = Arr;

    //print "Arr[0] " << Arr[0] << ptr2[0] << endl;

    //for (int i = 0; i <= 3; i++) {
    //    print Arr[i] << " ";
    //}
    //print endl;

    //for (int i = 0; i <= 3; i++) {
    //    print ptr2[i] << " ";
    //}
    //print endl;

    //for (int i = 0; i <= 3; i++) {
    //    print *(ptr2++) << " ";
    //}
    //print endl;
    //

    //char mas[5]{ '%', '2', '#', '*', '!' };
    //char* ptr4 = &mas[0];
    ////ptr4++;
    ////ptr4++;
    ////print "# First element: " << *ptr4 << endl;
    ////ptr4 += 2;
    ////print "! First element: " << *ptr4 << endl;

    //mas[0] = 'a';
    //ptr4[1] = 'b';
    //ptr4[2] = 'c';
    //ptr4[3] = 'd';
    //ptr4 = &mas[0];

    //for (int i = 0; i <= 4; i++) {
    //    print ptr4[i] << " ";
    //}
    //print endl;

    //int Arr[10]{ 1,2,3,4,5,6,7,8,9,10 };
    //int* ptr = Arr;

    //for (int i = 1; i < 9; i++) {
    //    print ptr[i] << " ";
    //}

    //print endl;

    //int* ptr1 = &Arr[0];
    //int* ptr2 = &Arr[1];

    //print* ptr2 << " " << *ptr1 << " ";

    //for (int i = 0; i < 4; i++) {
    //    print *(ptr2 += 2) << " ";
    //    print *(ptr1 += 2) << " ";
    //}

    //print endl;


    int A[5]{ 1,2,3,4,5 };
    int B[5]{ 6,7,8,9,10 };
    int C[10]{};

    for (int i = 0; i < 5; i++) {
        C[i] = A[i];
    }

    for (int i = 5, k = 0; i < 10; i++) {
       
        C[i] = B[k];
        k++;
    }

    for (int i = 0; i < 10; i++) {
        print C[i] << " ";
    }







}
