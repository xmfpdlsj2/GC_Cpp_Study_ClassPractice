#include "StringClass.h"

StringClass::StringClass(const char str[]) : mSize{ 0 }
{
	while (str[mSize] != '\0')
	{
		mSize++;
	}
	this->mStrContainer = new char[mSize + 1];

	for (int i = 0; i <= mSize; i++)
	{
		this->mStrContainer[i] = str[i];
	}
}

StringClass::~StringClass()
{
	delete[] mStrContainer;
	mStrContainer = nullptr;
	mSize = 0;
}

void StringClass::Print()
{
	std::cout << mStrContainer << std::endl;
}