#pragma once
#include <iostream>

class StringClass
{
private:
	int mSize;
	char* mStrContainer;

public:
	StringClass(const char str[]);
	~StringClass();

public:
	void Print();
};