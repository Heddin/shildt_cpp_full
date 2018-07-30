#pragma once
#include "Number.h"
#include <iostream>

using namespace std;

class DecType :
	public Number
{
public:
	DecType();
	~DecType();

	void show() {
		cout << val << endl;
	}
};

