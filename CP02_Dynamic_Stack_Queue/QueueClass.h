#pragma once
#include <iostream>

class ElementQueue
{
public:
	int mValue;
	ElementQueue* mpNext{ nullptr };
};


class QueueClass
{
private:
	int mCount;
	ElementQueue* mpHead;
	ElementQueue* mpTail;

public:
	QueueClass();
	~QueueClass();
	
	void Print() const;
	void Push(const int& value);
	void Pop();
	void DeleteAll();
};

