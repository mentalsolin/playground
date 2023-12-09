#include <iostream>
#include "windows.h"

#define _BIND_TO_CURRENT_CRT_VERSION 1
#define _BIND_TO_CURRENT_ATL_VERSION 1
#define _BIND_TO_CURRENT_MFC_VERSION 1
#define _BIND_TO_CURRENT_OPENMP_VERSION 1

using namespace std;

int chance(int num1) {
    int randomNumber;

    randomNumber = rand() % 7;
    num1 = randomNumber;

    return(num1);
}

void progressBar() {

    cout << "Please wait.";
    Sleep(200);
    cout << "\r                 \r";

    cout << "Please wait..";
    Sleep(200);
    cout << "\r                 \r";

    cout << "Please wait...";
    Sleep(200);
    cout << "\r                 \r";

    cout << "Please wait";
    Sleep(400);
    cout << "\r                 \r";


    cout << "Please wait.";
    Sleep(200);
    cout << "\r                 \r";

    cout << "Please wait..";
    Sleep(200);
    cout << "\r                 \r";

    cout << "Please wait...";
    Sleep(300);
    cout << "\r                 \r";
}

int main()
{
    srand(time(NULL));

    cout << "Welcome to the Dice game\n";
    cout << "The rules are you roll the die and get a number from 1 to 6 then the computer rolls the die and the one with the most points wins. good luck!\n\n";

    int player[6], computer[6];
    int playerSum{}, computerSum{};
    int playerFirst, temp{ 0 }, temp2{ 0 }, what{ 0 };


    while (true)
    {
        cout << "Do you want to start the game?\n\n";

        cout << "1 >  Start the game\n";
        cout << "2 >  About\n";
        cout << "3 >  Exit\n\n";

        cout << "Enter number >> ";
        cin >> what;

        if (what == 1) {
            system("cls");

            cout << "Do you want to start the game first?\n\n";

            cout << "1. Yes\n";
            cout << "2. No\n\n";

            cout << "Enter number >> ";
            cin >> what;

            cout << endl;
            system("cls");

            switch (what)
            {

            case 1:
                //Round 1
                cout << "Round 1 > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[0] = chance(temp);
                cout << "Round 1 > You rolled the dice and got the number " << player[0] << endl;

                progressBar();
                computer[0] = chance(temp2);
                cout << "Round 1 > Computer rolled the number " << computer[0] << endl << endl;



                //Round 2
                cout << "Round 2 > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[1] = chance(temp);
                cout << "Round 2 > You rolled the dice and got the number " << player[1] << endl;

                progressBar();
                computer[1] = chance(temp2);
                cout << "Round 2 > Computer rolled the number " << computer[1] << endl << endl;



                //Round 3
                cout << "Round 3 > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[2] = chance(temp);
                cout << "Round 3 > You rolled the dice and got the number " << player[2] << endl;

                progressBar();
                computer[2] = chance(temp2);
                cout << "Round 3 > Computer rolled the number " << computer[2] << endl << endl;



                //Round 4
                cout << "Round 4 > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[3] = chance(temp);
                cout << "Round 4 > You rolled the dice and got the number " << player[3] << endl;

                progressBar();
                computer[3] = chance(temp2);
                cout << "Round 4 > Computer rolled the number " << computer[3] << endl << endl;



                //Round 5
                cout << "Round 5 > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[4] = chance(temp);
                cout << "Round 5 > You rolled the dice and got the number " << player[4] << endl;

                progressBar();
                computer[4] = chance(temp2);
                cout << "Round 5 > Computer rolled the number " << computer[4] << endl << endl;

                break;

            case 2:

                //Round 1
                progressBar();
                computer[0] = chance(temp2);
                cout << "Round 1 > Computer rolled the number " << computer[0] << endl;

                cout << "Round 1 > > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[0] = chance(temp);
                cout << "Round 1 > You rolled the dice and got the number " << player[0] << endl << endl;



                //Round 2
                progressBar();
                computer[1] = chance(temp2);
                cout << "Round 2 > Computer rolled the number " << computer[1] << endl;

                cout << "Round 2 > > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[1] = chance(temp);
                cout << "Round 2 > You rolled the dice and got the number " << player[1] << endl << endl;



                //Round 3
                progressBar();
                computer[2] = chance(temp2);
                cout << "Round 3 > Computer rolled the number " << computer[2] << endl;

                cout << "Round 3 > > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[2] = chance(temp);
                cout << "Round 3 > You rolled the dice and got the number " << player[2] << endl << endl;



                //Round 4
                progressBar();
                computer[3] = chance(temp2);
                cout << "Round 4 > Computer rolled the number " << computer[3] << endl;

                cout << "Round 4 > > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[3] = chance(temp);
                cout << "Round 4 > You rolled the dice and got the number " << player[3] << endl << endl;



                //Round 5
                progressBar();
                computer[4] = chance(temp2);
                cout << "Round 5 > Computer rolled the number " << computer[4] << endl;

                cout << "Round 5 > > Enter \"1\" for roll dice >> ";
                cin >> temp;

                player[4] = chance(temp);
                cout << "Round 5 > You rolled the dice and got the number " << player[4] << endl << endl;
                break;

            default:
                break;
            }


            for (int i = 0; i < 5; i++) {
                playerSum += player[i];
            }

            cout << endl;

            for (int i = 0; i < 5; i++) {
                computerSum += computer[i];
            }

            if (computerSum < playerSum) {
                cout << "You win!" << endl;
                cout << "Player points " << playerSum << endl;
                cout << "Computer points " << computerSum << endl << endl;
            }

            if (computerSum > playerSum) {
                cout << "You lose :(" << endl;
                cout << "Player points " << playerSum << endl;
                cout << "Computer points " << computerSum << endl << endl;
            }

            cout << "1. Play again\n";
            cout << "2. Exit\n\n";

            cout << "Enter number >> ";
            cin >> what;

            system("cls");

            if (what == 2) {
                break;
            }

        }

        if (what == 2) {
            system("cls");

            cout << "Game coded by Solin4035!\n";
            cout << "Website > https://thesolin.ru/\n\n";

        }

        if (what == 3) {
            break;
        }
    }

}
