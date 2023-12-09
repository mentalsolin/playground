#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    
    double sales_man_one, sales_man_two, sales_man_three;
    int prem_one{}, prem_two{}, prem_three{};

    cout << " > Введите продажи трех менеджеров >> ";
    cin >> sales_man_one >> sales_man_two >> sales_man_three;

    if (sales_man_one > sales_man_two) {
        if (sales_man_one > sales_man_three) {
            prem_one = 200;
            cout << " > Премью получает первый менеджер!" << endl;
        }
    }

    if (sales_man_two > sales_man_one)
    {
        if (sales_man_three > sales_man_three)
        {
            prem_two = 200;
            cout << " > Премию получает второй менеджер!" << endl;
        }
    }

    if (sales_man_three > sales_man_two)
    {
        if (sales_man_three > sales_man_one)
        {
            prem_three = 200;
            cout << " > Премию получает третий менеджер!" << endl;
        }
    }


    if (sales_man_one < 501)
    {
        cout << " > Первый менеджер заработал >> " << sales_man_one + (sales_man_one / 100 * 3) + 200 + prem_one << " Руб." << endl;
    }
    else if (sales_man_one > 500 and sales_man_one < 1001)
    {
        cout << " > Первый менеджер заработал >> " << sales_man_one + (sales_man_one / 100 * 5) + 200 + prem_one << " Руб." << endl;
    }
    else
    {
        cout << " > Первый менеджер заработал >> " << sales_man_one + (sales_man_one / 100 * 8) + 200 + prem_one << " Руб." << endl;
    }

    if (sales_man_two < 501)
    {
        cout << " > Второй менеджер заработал >> " << sales_man_two + (sales_man_two / 100 * 3) + 200 + prem_two << " Руб." << endl;
    }
    else if (sales_man_two > 500 and sales_man_two < 1001)
    {
        cout << " > Второй менеджер заработал >> " << sales_man_two + (sales_man_two / 100 * 5) + 200 + prem_two << " Руб." << endl;
    }
    else
    {
        cout << " > Второй менеджер заработал >> " << sales_man_two + (sales_man_two / 100 * 8) + 200 + prem_two << " Руб." << endl;
    }

    if (sales_man_three < 501)
    {
        cout << " > Первый менеджер заработал >> " << sales_man_three + (sales_man_three / 100 * 3) + 200 + prem_three << " Руб." << endl;
    }
    else if (sales_man_three > 500 and sales_man_three < 1001)
    {
        cout << " > Первый менеджер заработал >> " << sales_man_three + (sales_man_three / 100 * 5) + 200 + prem_three << " Руб." << endl;
    }
    else
    {
        cout << " > Первый менеджер заработал >> " << sales_man_three + (sales_man_three / 100 * 8) + 200 + prem_three << " Руб." << endl;
    }
}
