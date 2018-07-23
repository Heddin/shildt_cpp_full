#include <iostream>
#include "Stack.cpp"
using namespace std;

int main() {
	
	Stack stack1, stack2;

	stack1.init();
	stack2.init();

	stack1.push(1);
	stack2.push(2);

	stack1.push(3);
	stack2.push(4);

	cout << stack1.pop() << " ";
	cout << stack1.pop() << " ";
	cout << stack2.pop() << " ";
	cout << stack2.pop() << "\n";


	return 0;
}