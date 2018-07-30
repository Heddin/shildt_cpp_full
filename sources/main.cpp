#include <iostream>
#include "Stack.cpp"
#include "\dev\other\cpp\shildt_cpp_full\shildt_cpp_full\DecType.h"
#include "\dev\other\cpp\shildt_cpp_full\shildt_cpp_full\HexType.h"
#include "\dev\other\cpp\shildt_cpp_full\shildt_cpp_full\OctType.h"
#include "\dev\other\cpp\shildt_cpp_full\shildt_cpp_full\Number.h"

using namespace std;

int main() {
	
	DecType d;
	OctType o;
	HexType h;

	d.setval(20);
	d.show();

	h.setval(20);
	h.show();
	
	o.setval(20);
	o.show();

	return 0;
}