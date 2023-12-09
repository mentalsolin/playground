#include <iostream>
using namespace std;
void draw_grid(char display[][3]) {
    cout << "Board\n" << "-------------" << endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout << "| " << display[x][y] << " ";
        }
        cout << "|" << endl << "-------------";
        cout << endl;
    }
}
void player_input(char size[][3]) {
    char sign;
    char number;
    cout << "X or O" << endl;
    cin >> sign;
    cout << "Choose a number\n";
    cin >> number;
    switch (number) {
    case '1':
        size[0][0] = sign;
        break;
    case '2':
        size[0][1] = sign;
        break;
    case '3':
        size[0][3] = sign;
        break;
    case '4':
        size[1][0] = sign;
        break;
    case '5':
        size[1][1] = sign;
        break;
    case '6':
        size[1][2] = sign;
        break;
    case '7':
        size[2][0] = sign;
        break;
    case '8':
        size[2][1] = sign;
        break;
    case '9':
        size[2][2] = sign;
        break;
    }
}
int main() {
    char arr[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
    };
    draw_grid(arr);
    player_input(arr);
    draw_grid(arr);
    return 0;
}