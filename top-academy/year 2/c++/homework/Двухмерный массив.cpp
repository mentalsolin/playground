#include <iostream>
using namespace std;

int main()
{
    int x[2][2];

    srand(time(NULL));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            x[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << x[i][j];
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << x[j][i];
        }
        cout << endl;
    }
}
