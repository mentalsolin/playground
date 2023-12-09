#include <iostream>
using namespace std;

struct Element { //Узел
	//Данные 
	char data;
	//Адрес следующего элемента списка (указатель)
	Element* Next;
};
//Односвязный список
class List {
private:
	//Адрес головного элемента (самый 1 узел)
	Element* Head;
	//Адрес концевого элемента (самый последний узел)
	Element* Tail;
	//Кол-во элементов списка(кол-во узлов)
	int Count;
public:
	//Конструктор
	List();
	//Деструктор
	~List();
	//Добавление элемента в список(элемент добавляется в конец)
	void Add(char data);
	//Удаление элемента списка (Удаляет головной элемент, самый первый)
	void Del();
	//Удаление всего списка
	void DelAll();
	//Печать всего списка. Печать начинается с головного элемента
	void Print();
	//Кол-во элементов в списке
	int GetCount();
	void DeleteFromTail();
	int FindAndReplace(char element, char replace);
	friend Element operator*(Element& p1, Element& p2);
};

int main()
{
	setlocale(LC_ALL, "");
	List l; //объект класса list l - односвязный список
	List k; //объект класса list k - односвязный список
	char s[] = "StringStringString";
	cout << s << endl;
	int len = strlen(s); //определяем длину строки
	//Записываем строку в список по буквенно 
	for (int i = 0; i < strlen(s); i++) {
		l.Add(s[i]);
	}

	l.Print();
}

List::List()
{ //Изначально  список пустой
	Head = Tail = NULL;
	Count = 0;
}

List::~List()
{
	DelAll();
}

void List::Add(char data)
{
	//создание нового элемента
	Element* temp = new Element;
	//Заполняем элемент данными
	temp->data = data;
	//Следующий элемент отсуствует (добавляем в конец)
	temp->Next = NULL;
	//если список был не пустым до добавления элемента
	if (Head != NULL) {
		Tail->Next = temp;
		Tail = temp;
	}
	else {//если список был пустым до добавления элемента
		Head = temp;
		Tail = temp;
	}
	Count++;
}

void List::Del()
{
	//Запоминаем адрес головного элемента(1ого элемента)
	Element* temp = Head;
	//перебрасываем указатель головы на след.элемент
	Head = Head->Next;
	//удаляем бывший головной элемент( 1ый элемент)
	Count--;
	delete temp;
}

void List::DelAll()
{//Пока ещё есть элементы 
	while (Head != 0) {
		//Удаляем элементы по-одному
		Del();
	}
	Count = 0;
}

void List::Print()
{
	//запоминаем адрес головного элемента
	Element* temp = Head;

	while (temp != 0) {
		//Выводим данные и переходим к след.элементу
		cout << temp->data << " ";
		temp = temp->Next;
	}
	cout << endl;
}

int List::GetCount()
{//Возвращаем кол-во элементов
	return Count;
}

void List::DeleteFromTail()
{
	Element* current = Head;
	for (int i = 0; i < Count - 2; i++) {
		//Двигаемся по списку узлов на один вперед
		current = current->Next;//предпоследний элемент
	}
	Tail = current;
	current->Next = NULL;
	Count--;
}

int List::FindAndReplace(char element, char replace)
{
	Element* temp = Head;

	int Counter = 0;

	while (temp != 0) {
		if (temp->data == element) {
			temp->data = replace;
			Counter++;
		}
		else {
			Counter = -1;
		}
		temp = temp->Next;
	}
	return Counter;
}

Element operator*(Element& p1, Element& p2)
{
	return Element();
}
