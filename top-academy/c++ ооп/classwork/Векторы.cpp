
#include <iostream>
#include<vector>
#include<Windows.h>
#include<algorithm>
using namespace std;

void title() {
    Sleep(1000);

}

int main()
{
    srand(time(NULL));
    SetConsoleOutputCP(1251);//для кириллицы ввода и вывода
    SetConsoleCP(1251);
    title();
    //Пользователь вводит слово и оно сравнивается с загаданным словом.
    vector<string> words{ "robot","computer" };
    string choice = words[rand() % 2];
    vector<char> letter(choice.size());//вектор который мы ввели
    vector<char>word(choice.size(), '_');//по буквенный разбор загаданного слова. Заполняем _ _ _ _ _ 
    for (int i = 0; i < choice.size(); i++) {
        cout << "\nEnter letter: ";
        cin >> letter[i];
        //Если find вернул не конец слова, то буква  найдена
        if (find(choice.begin(), choice.end(), letter[i]) != end(choice)) {
            for (int j = 0; j < choice.size(); j++) {
                if (choice[j] == letter[i]) {
                    word[j] = letter[i];//заменяем прочерк на букву если она найдена
                }
            }
            for (int j = 0; j < word.size(); j++) {
                cout << word[j];
            }
            cout << endl;
        }
        else {
            for (int j = 0; j < word.size(); j++) {
                cout << word[i];
            }
            cout << endl;
        }
        if (find(word.begin(), word.end(), '_') == end(word)) {
            cout << "\nYou win!";
            return 0;
        }
    }
    cout << "\nYou lose :(";

}