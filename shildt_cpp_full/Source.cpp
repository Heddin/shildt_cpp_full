#define SIZE 100

class Stack {
	int stack[SIZE];
	int tos;
  
	public:
		void init();
		void push(int i);
		int pop();
};


int main() {
	Stack stack;

	return 0;
}