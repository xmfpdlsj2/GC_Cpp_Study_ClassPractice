#include "QueueClass.h"

QueueClass::QueueClass() :
	mCount{} , mpHead{ nullptr }, mpTail{ nullptr }
{
}

QueueClass::~QueueClass()
{
	DeleteAll();
}

void QueueClass::Print() const
{
	ElementQueue* itr{ mpHead };
	std::cout << "----Queue-----" << std::endl;
	while (itr != nullptr)
	{
		std::cout << itr->mValue << " ";
		itr = itr->mpNext;
	}
	std::cout << "\n--------------" << std::endl;
}

void QueueClass::Push(const int& value)
{
	ElementQueue* element{ new ElementQueue()};
	element->mValue = value;
	
	if (mCount == 0)
	{
		mpHead = element;
	}
	else
	{
		mpTail->mpNext = element;
	}
	mpTail = element;

	mCount++;
}

void QueueClass::Pop()
{
	if (mCount == 0)
	{
		std::cout << "큐가 비었습니다." << std::endl;
		return;
	}

	ElementQueue* temp{ nullptr };
	if (mpHead != mpTail)
	{
		temp = mpHead->mpNext;
	}
	else
	{
		mpTail = nullptr;
	}

	std::cout << "Pop! : " << mpHead->mValue <<  std::endl;

	delete mpHead;
	mpHead = temp;
	
	mCount--;
}

void QueueClass::DeleteAll()
{
	ElementQueue* temp{ nullptr };
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
