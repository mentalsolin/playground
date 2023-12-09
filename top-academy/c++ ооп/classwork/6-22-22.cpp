#include <iostream>

using namespace std;

int main()
{

	srand(time(NULL));

	int i, j;
	int masRov1 = 3, masCol1 = 3;
	int counter{1};

	int** pArr = new int* [masRov1];

	for (i = 0; i < masRov1; i++) {
		pArr[i] = new int[masCol1];
	}	

	for (i = 0; i < masRov1; i++) {
		for (j = 0; j < masCol1; j++) {
			pArr[i][j] = rand() % 4;
		}
	}

	for (i = 0; i < masRov1; i++) {
		for (j = 0; j < masCol1; j++) {
			cout << pArr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	int counterNuls{};

	for (i = 0; i < masRov1; i++) {
		for (j = 0; j < masCol1; j++) {
			if (pArr[i][j] == 0) {
				counterNuls++;
			}
			cout << pArr[i][j] << " ";
		}
		cout << endl;
	}




	//for (i = 0; i < masRov2; i++) {
	//	for (j = 0; j < masCol2; j++) {
	//		cout << pArr2[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	cout << endl;
	cout << endl;
	cout << endl;


	int** pArr3 = new int* [counterNuls];

	int** pArr4 = new int* [counterNuls];


	for (i = 0; i < masRov1; i++) {
		pArr4[i] = new int[masCol1];
	}

	cout << "Nuls: " << counterNuls;
	cout << endl;

	for (i = 0; i < masRov1; i++) {
		for (j = 0; j < masCol1; j++) {
			if (pArr[i][j] != 0) {
				pArr[i][j] = pArr4[i][j];
			}
		}
	}

	for (i = 0; i < masRov1; i++) {
		for (j = 0; j < masCol1; j++) {
			cout << pArr4[i][j];
		}
		cout << endl;
	}


	//for (i = 0; i < masRov2; i++) {
	//	for (j = 0; j < masCol2; j++) {
	//		if (pArr2[i][j] == 0) {
	//			pArr2[i][j] = 0;
	//		}
	//		cout << pArr2[i][j] << " ";
	//	}
	//	cout << endl;
	//}





	for (i = 0; i < masRov1; i++) {
		delete[]pArr[i];
	}
	delete[]pArr;
	delete[]pArr3;
}



//
//int i, j;
//int masRov1 = 2, masCol1 = 3;
//int counter{ 1 };
//
//int** pArr = new int* [masRov1];
//
//for (i = 0; i < masRov1; i++) {
//	pArr[i] = new int[masCol1];
//}
//
//for (i = 0; i < masRov1; i++) {
//	for (j = 0; j < masCol1; j++) {
//		pArr[i][j] = counter;
//		counter++;
//	}
//}
//
//for (i = 0; i < masRov1; i++) {
//	for (j = 0; j < masCol1; j++) {
//		cout << pArr[i][j] << " ";
//	}
//	cout << endl;
//}
//
//cout << endl;
//
//int masRov2 = 3, masCol2 = 3;
//
//int** pArr2 = new int* [masRov2];
//
//for (i = 0; i < masRov2; i++) {
//	pArr2[i] = new int[masCol2];
//}
//
//
//
//
//
//
//for (i = 0; i < masRov2; i++) {
//	for (j = 0; j < masCol2; j++) {
//		pArr2[i - 2][j - 2] = pArr[i][j];
//	}
//}
//
//
//for (int i = 0, a = 0; i < masRov2; i++) {
//	for (int j = 0, b = 0; j < masRov1; j++) {
//		if (i > 0) {
//			pArr2[i][j] = pArr[a][b];
//			b++;
//		}
//		else {
//			pArr2[i][j] = rand() % 10;
//		}
//	}
//	if (i > 0) {
//		a++;
//	}
//}
//
//
//
//
//
//
//
//
//
//
//for (i = 0; i < masRov2; i++) {
//	for (j = 0; j < masCol2; j++) {
//		cout << pArr2[i][j] << " ";
//	}
//	cout << endl;
//}
//
//
//
//
//for (i = 0; i < masRov1; i++) {
//	delete[]pArr[i];
//}
//delete[]pArr;
//
//
//for (i = 0; i < masRov2; i++) {
//	delete[]pArr2[i];
//}
//delete[]pArr2;
//

// задание 2
//
//
//int i, j;
//int masRov1 = 3, masCol1 = 3;
//int counter{ 1 };
//
//int** pArr = new int* [masRov1];
//
//for (i = 0; i < masRov1; i++) {
//	pArr[i] = new int[masCol1];
//}
//
//for (i = 0; i < masRov1; i++) {
//	for (j = 0; j < masCol1; j++) {
//		pArr[i][j] = rand() % 10;
//	}
//}
//
//for (i = 0; i < masRov1; i++) {
//	for (j = 0; j < masCol1; j++) {
//		cout << pArr[i][j] << " ";
//	}
//	cout << endl;
//}
//
//cout << endl;
//
//int masRov2 = 3, masCol2 = 3;
//
//int** pArr2 = new int* [masRov2];
//
//for (i = 0; i < masRov2; i++) {
//	pArr2[i] = new int[masCol2];
//}
//
//
//
//for (i = 0; i < masRov2; i++) {
//	for (j = 0; j < masCol2; j++) {
//		pArr2[i][j] = rand() % 10;
//	}
//}
//
//
//
//
//for (i = 0; i < masRov2; i++) {
//	for (j = 0; j < masCol2; j++) {
//		cout << pArr2[i][j] << " ";
//	}
//	cout << endl;
//}
//
//
//cout << endl;
//
//
//
//for (i = 0; i < masRov2; i++) {
//	for (j = 0; j < masCol2; j++) {
//		cout << pArr[i][j] << " + " << pArr2[i][j] << " = " << pArr2[i][j] + pArr[i][j];
//
//		cout << endl;
//	}
//}
//
//
//
//
//
//for (i = 0; i < masRov1; i++) {
//	delete[]pArr[i];
//}
//delete[]pArr;
//
//
//for (i = 0; i < masRov2; i++) {
//	delete[]pArr2[i];
//}
//delete[]pArr2;