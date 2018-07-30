#pragma once
#include "Number.h"
#include <iostream>

using namespace std;

class OctType :
	public Number
{
public:
	OctType();
	~OctType();

	void show() {
		cout << oct << val << endl;
	}
};

