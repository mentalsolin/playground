#include <iostream>
using namespace std;

struct Library {
	string name;
	string author;
	string genre;
};

void render(Library book) {
	cout << "Name: " << book.name << endl;
	cout << "Author: " << book.name << endl;
	cout << "Genre: " << book.name << endl << endl;
}

int main()
{

	Library book1 = { "Book1", "Anton", "Horror"};
	Library book2 = { "Book2", "Eugene", "Horror"};
	Library book3 = { "Book3", "Anton", "Horror"};
	Library book4 = { "Book4", "Anton", "Romance"};
	Library book5 = { "Book5", "Anton", "Horror"};

	render(book1);
	render(book2);
	render(book3);
	render(book4);
	render(book5);
}
