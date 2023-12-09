#include <iostream>
using namespace std;




void boubbleSort(int array[], int sortR) {

    int temp{};
    for (int i = 0; i < sortR; i++) {
        for (int j = sortR - 1; j > i; j--) {
            if (array[j - 1] > array[j]) {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }
}

void boubbleSort2(int array[], int sortR) {

    int temp{};
    for (int i = 0; i < sortR; i++) {
        for (int j = sortR - 1; j > i; j--) {
            if (array[j - 1] < array[j]) {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }
}


void pasteSort(int array[], int sortR) {

    int temp{};

    for (int i = 0; i < sortR; i++) {
        temp = array[i];
        for (int j = 0; j >= 0 || array[j] > temp; j--) {
            array[j + 1] = array[j];
            array[j + 1] = temp;
        }
    }
}
//for (int i = 0; i < sortR; i++) {
//    for (int j = sortR - 1; j > i; j--) {
//        if (array[j - 1] > array[j]) {
//            temp = array[j - 1];
//            array[j - 1] = array[j];
//            array[j] = temp;
//        }
//    }
//}

int main()
{
    //const int range = 5;
    //int array[range][range], temp{ 0 };
    //int arrayTwo[range][range];
    //int arrayThree[range][range];

    //srand(time(NULL));
    //for (int i = 0; i < range; i++) {
    //    for (int j = 0; j < range; j++) {
    //        array[i][j] = rand() % 10;
    //    }
    //}

    //for (int i = 0; i < range; i++) {
    //    for (int j = 0; j < range; j++) {
    //        if (array[i][j] != 0) {
    //            arrayTwo[i][j] = array[i][j];
    //            cout << " " << arrayTwo[i][j];
    //        }
    //    }
    //}

    //for (int i = 0; i < range; i++) {
    //    for (int j = 0; j < range; j++) {
    //        if (arrayTwo[i][j] < 0) {
    //            arrayTwo[i][j] = -1;
    //            cout << " " << arrayTwo[i][j];
    //        }
    //    }
    //}
    //cout << endl << endl;
    // Пузырьковая сортировка

    const int sortR{ 10 };
    int sortArray[sortR];

    srand(time(NULL));

    cout << "               Array : ";

    for (int i = 0; i < sortR; i++) {
        sortArray[i] = rand() % 10;
        cout << sortArray[i] << " ";
    }
    cout << endl;
    boubbleSort(sortArray, sortR);
    cout << "Array sorted bubble > : ";

    for (int i = 0; i < sortR; i++) {
        cout << sortArray[i] << " ";
    }

    cout << endl;
    boubbleSort2(sortArray, sortR);
    cout << "Array sorted bubble < : ";

    for (int i = 0; i < sortR; i++) {
        cout << sortArray[i] << " ";
    }

    cout << endl;

    pasteSort(sortArray, sortR);
    cout << "   Array sorted paste : ";

    for (int i = 0; i < sortR; i++) {
        cout << sortArray[i] << " ";
    }




}

//for (int i = 0; i < range; i++) {
//    for (int j = 0; j < range; j++) {
//        if (array[i][j] != 0) {
//            arrayTwo[i][j] = array[i][j];
//            cout << " " << arrayTwo[i][j];
//        }
//    }
//}
//
//
//for (int i = 0; i < range; i++) {
//    for (int j = 0; j < range; j++) {
//        if (arrayTwo[i][j] < 0) {
//            arrayTwo[i][j] = -1;
//            cout << " " << arrayTwo[i][j];
//        }
//    }
//}