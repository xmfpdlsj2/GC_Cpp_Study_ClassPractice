#pragma once
#include "LinkedList.h"

template<typename T>
class Stack : public LinkedList<T>
{
private:
	Element<T>* mTop;
	int mCount;

public:
	Stack() : mTop{ nullptr }, mCount{}
	{
	}
	~Stack() 
	{
		DeleteAll();
	};

	// LinkedList을(를) 통해 상속됨
	virtual void Push(T value) override
	{
		Element<T>* element{ new Element<T>(value) };
		element->mpNext = mTop;
		mTop = element;

		++mCount;
	}

	virtual void Pop() override
	{
		if (mCount == 0)
		{
			std::cout << "STACK is empty" << std::endl;
			return;
		}

		Element<T>* pop{ mTop };
		std::cout << "Pop! : " << pop->mValue << std::endl;
		mTop = pop->mpNext;
		delete pop;

		--mCount;
	}

	virtual void Print() override
	{
		Element<T>* itr{ mTop };
		std::cout << "--- STACK ---" << std::endl;
		while (itr != nullptr)
		{
			std::cout << itr->mValue << std::endl;
			itr = itr->mpNext;
		}
		std::cout << "--- ----- ---" << std::endl;
	}

	virtual void DeleteAll() override
	{
		Element<T>* itr{ mTop };
		while (itr != nullptr)
		{
			mTop = itr->mpNext;
			delete itr;
			itr = mTop;
		}

		std::cout << "Delete all elements" << std::endl;
	}
};

