#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Base {
	string username;
	size_t password;

public:
	hash<string> hasher;

	void New() {
		string passwordTemp;

		cout << "Registration.\nEnter your username: ";
		cin >> username;
		cout << "Enter your password: ";
		cin >> passwordTemp;

		password = hasher(passwordTemp);

		cout << "\nRegistration complete!\n\n\n";
	}

	void Auth() {
		string passwordTemp;
		string usernameTemp;

		int counter = 0;

		while (counter < 3)
		{
			cout << "Auth.\nEnter your username: ";
			cin >> usernameTemp;
			cout << "Enter your password: ";
			cin >> passwordTemp;

			if (password == hasher(passwordTemp) and usernameTemp == username) {
				cout << "Successful authentication!\n\n";
				break;
			}
			else
			{
				cout << "\nTry again.\n\n\n";
				counter++;
			}
		}
	}

	void Show() {
		cout << "Username: ";
		cout << username << endl;
		cout << "Password: ";
		cout << password;
	}
};

int main()
{
	Base user;

	user.New();
	user.Auth();
	user.Show();
}
