#pragma once
#include "Number.h"
#include <iostream>


class HexType :
	public Number
{
public:
	HexType();
	~HexType();
	
	void show() {
		std::cout << std::hex << val << std::endl;
	}
};

