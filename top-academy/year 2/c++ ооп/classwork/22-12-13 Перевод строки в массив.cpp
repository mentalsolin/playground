#include <iostream>

using namespace std;

struct Node { // нода
	char data;
	Node* Next;
};

class List {
	Node* Head; // Адресс головного элемента
	Node* Tail; // Адресс последнего элемента
	int Count;
public:
	List(); // конструктор
	List(const List& List); // конструктор с парметрами
	~List(); // деструктор
	// добавление элементов в список (новый элемент становится последним)
	void Add(char data);
	// удаление элемента в списке (удаление головного элемента)
	void Del();
	// удаление всего списка
	void DelAll();
	// печать всего списка
	void Print();
	// получение колличества нод в списке
	int GetCount();

	List& Clone(const List&);
	List operator+(const List& list);
};

int main() {
	List list;
	char s[] = "12345";
	cout << "char > s = " << s << endl;
	//определяем длинну строки
	int len = strlen(s);
	//загоняем строку по символьно в список
	for (int i = 0; i < len; i++) {
		list.Add(s[i]);
	}
	list.Print();

	List List1;
	List List2;







}

List::List() { // изначальный список пуст
	Head = Tail = nullptr;
	Count = 0;
}

List::List(const List& list) {
	this->Clone(list);
}

List::~List() {
	DelAll();
}

void List::Add(char data) { 
	Node* temp = new Node; // создание новой ноды
	temp->data = data; // заполняем дату
	temp->Next = NULL; // следующая нода отсутствует
	/* новый элемент становится последним элементов в списке если он не новый доавленный */
	if (Head != NULL) {
		Tail->Next = temp;
		Tail = temp;
	}
	else { // если элемент единственный в списке
		Head = Tail = temp;
	}
	Count++;
}

void List::Del() {
	Node* temp = Head;
	// перебрасываем голову на следующий элемент
	Head = Head->Next;
	// удаляем головной элемент
	delete temp;
}

void List::DelAll() {
	while (Head != 0) {
		Del();
	}
}

void List::Print() {
	Node* temp = Head;
	// пока еще есть элементы
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->Next;
	}
	cout << endl;
}

int List::GetCount() {
	return Count;
}

List& List::Clone(const List& list) {
	// перебираем есь список от головного до хвоста с помощью указателя
	for (Node* cur = list.Head; cur != NULL; cur = cur->Next) {
		this->Add(cur->data);
	}
	return *this; // возвращаемся клонированный список
}

List List::operator+(const List& list)
{
	

	return List();
}
