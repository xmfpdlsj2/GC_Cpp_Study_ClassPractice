#pragma once
#include <iostream>

template<typename T>
class Element
{
public:
	T mValue;
	Element* mpNext;

public:
	Element(T value) : mValue{ value }, mpNext{ nullptr }
	{
	}
	~Element() {};
};


template<typename T>
class LinkedList
{
public:
	virtual void Push(T value) = 0;
	virtual void Pop() = 0;
	virtual void Print() = 0;
	virtual void DeleteAll() = 0;
};

