#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	stack<int> stack1;
	for (size_t i = 1; i < 11; i++) {
		stack1.push(i);
	}

	cout << "Stack: "; // Вывод и очистка стека
	for (size_t i = 1; i < 11; i++) {
		cout << stack1.top() << " ";
		stack1.pop();
	}

	stack1.empty() ? cout << "Stack is empty" : cout << "Stack is full";


	cout << endl;

	queue<int> queue1;

	int mas1[]{ 1,2,3,4,5,9,35 };
	for (size_t i = 0; i < 5; i++) {
		queue1.push(mas1[i]);
	}

	for (int i: mas1) {
		queue1.push(i);
	}
	for (size_t i = 0; i <= queue1.size(); i++) {
		cout << queue1.front()  << " ";
		queue1.pop();
	}
}