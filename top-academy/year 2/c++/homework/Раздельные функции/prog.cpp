#include <iostream>
#include "function.h"
#define show ShowInt
using namespace std;

int main()
{
    srand(time(NULL));

    int mas[20];
    arrayFill(mas);

    arrayRender(mas);
    cout << "\n\n";
    arrayMin(mas);
    cout << "\n\n";
    arrayMax(mas);
    cout << "\n\n";
    selectionSort(mas, 19);
    cout << "\n\n";
    arrayChange(mas);
}