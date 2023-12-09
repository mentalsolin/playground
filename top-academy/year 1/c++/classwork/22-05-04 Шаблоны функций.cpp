#include <iostream>
#include <math.h>
using namespace std;

#define print cout
#define nl endl
#define nl2 endl << endl
#define tab "\t"

#define newline cout << endl << endl

//long long compare_numbers(double num1, double num2, double num3 = 0) {
//    
//    return(num1 > num2) ? num1 : num2;
//
//    if (num1 > num2 && num2 > num3) {
//        return num2;
//    }
//
//    else {
//        if (num2 > num1 && num2 > num3) {
//
//        }
//    }
//}
//
//void compare_numberss() {
//    int num8{ 2 }, num9{ 3 };
//    print << "Enter Two numbers";
//    /*cin >> num8 >> num9;*/
//    print << "Bigger int number is: ";
//    (num8 > num9) ? print << num8 : print << num9;
//}
//
//template<typename T> T compare_numbers(T num1, T num2, T num3) {
//    return(num1 > num2) ? num1 : num2;
//}
//
//template<typename T> T compare_numbers(T num1, T num3) {
//    int num8{ 2 }, num9{ 3 };
//    print << "Enter Two numbers";
//    /*cin >> num8 >> num9;*/
//    print << "Bigger int number is: ";
//    (num8 > num9) ? print << num8 : print << num9;
//}
//
//template<tempname T, typename T1>
//    T1 small_numbers(T num1, T1 num2) {
//    return (num1 > num2) ? num2 : num1;
//}



template<typename T> void srednee(T num1) {

    int temp{ 0 };

    for (int i = 0; i < 4; i++) {
        temp += num1[i];
    }
    print << temp / 4;
}
    



int main()
{


    double array2[4] = { 1.82, 9.7, 1.8, 4.77 };
    srednee(array2);
    newline;

    int array[4] = { 1, 7, 2, 9 };
    srednee(array);
    newline;









    //int num1{ 1212133 }, num2{ 2132318 };
    //print << "Bigger number is: " << compare_numbers(num1, num2) << nl;

    //long long num3{ 2000009 }, num4{ 2000001 };
    //print << "Bigger long number is: " << compare_numbers(num3, num4) << nl;

    //double num5{ 12.948 }, num6{ 2.283 };
    //print << "Bigger number is: " << compare_numbers(num5, num6) << nl;

    //double num7{ 3123.948 };
    //print << "Bigger number is: " << compare_numbers(num5, num6, num7) << nl2;

    //// Template

    //newline;

    //float num10{ 10.1 }, num11{ 1.123 };
    //int num12{ 82 }, num13{ 82 };
    //print << "Smaller of numbers: " << small_numbers(num10, num11);
    //print << "Smaller of numbers: " << small_numbers(num12, num13);

    //newline;

    //int num14{ 57894 };
    //double num15{ 3443.345 };
    //cout << "\nSmaller first of number: " << small_numbers(num14, num15);
}
