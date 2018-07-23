#define SIZE 100

using namespace std;

class Stack {
	int stack[SIZE];
	int tos;
  
	public:
		void init() { tos = 0; };
		void push(int i);
		int pop();
};

void Stack::push(int i) {
	if (tos == SIZE) {
		cout << "Stack is full." << endl;
		return;
	}
	stack[tos] = i;
	tos++;
}

int Stack::pop() {
	if (tos == 0){
		cout << "Stack is empty." << endl;
		return 0;
	}

	tos--;
	return stack[tos];
}


