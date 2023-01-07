#pragma once
#include "LinkedList.h"

template<typename T>
class Queue : public LinkedList<T>
{
private:
	Element<T>* mpHead;
	Element<T>* mpTail;
	int mCount;

public:
	Queue() : mpHead{ nullptr }, mpTail{ nullptr }, mCount{}
	{
	}
	~Queue() {};

	// LinkedList을(를) 통해 상속됨
	virtual void Push(T value) override
	{
		Element<T>* element{ new Element<T>(value) };

		if (mCount == 0)
		{
			mpHead = element;
		}
		else
		{
			mpTail->mpNext = element;
		}
		mpTail = element;

		++mCount;
	}

	virtual void Pop() override
	{
		if (mCount == 0)
		{
			std::cout << "Queue is empty" << std::endl;
			return;
		}

		Element<T>* itr{ mpHead };
		
		if (mpHead == mpTail)
		{
			mpTail = nullptr;
		}
		mpHead = itr->mpNext;
		delete itr;

		--mCount;
	}

	virtual void Print() override
	{
		Element<T>* itr{ mpHead };
		std::cout << "------ Queue ------" << std::endl;
		while (itr != nullptr)
		{
			std::cout << itr->mValue << " ";
			itr = itr->mpNext;
		}
		std::cout << "\n------ ----- ------" << std::endl;
	}

	virtual void DeleteAll() override
	{
		Element<T>* temp{ nullptr };
		while (mpHead != nullptr)
		{
			temp = mpHead->mpNext;
			delete mpHead;
			mpHead = temp;
		}
		mpTail = nullptr;
		mCount = 0;

		std::cout << "Delete all elements" << std::endl;
	}
};