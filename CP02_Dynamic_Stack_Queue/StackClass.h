#pragma once
#include <iostream>

class ElementSTACK
{
public:
	int mValue;
	ElementSTACK* mNext;

public:
	ElementSTACK() : mValue{}, mNext{ nullptr }
	{
	}
};

class StackClass
{
private:
	ElementSTACK* mTop;
	int mCount;

public:
	StackClass();
	~StackClass();

public:
	void Print() const;
	void Push(int value);
	void Pop();
	void DeleteAll();
};

