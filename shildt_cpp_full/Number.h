#pragma once
class Number
{
protected:
	int val;
public:
	Number();
	~Number();
	
	void setval(int i) { val = i; }
	virtual void show() = 0;
};



