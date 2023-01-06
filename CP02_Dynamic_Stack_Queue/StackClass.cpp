#include "StackClass.h"

StackClass::StackClass() : mTop{ nullptr }, mCount{}
{
}

StackClass::~StackClass()
{
	DeleteAll();
}

void StackClass::Print() const
{
	ElementSTACK* element = this->mTop;
	std::cout << "------- STACK ------" << std::endl;
	while (element != nullptr)
	{
		std::cout << element->mValue << std::endl;
		element = element->mNext;
	}
	std::cout << "------- ----- ------" << std::endl;
}

void StackClass::Push(int value)
{
	ElementSTACK* element{ new ElementSTACK };
	element->mValue = value;
	element->mNext = this->mTop;
	this->mTop = element;

	this->mCount++;
}

void StackClass::Pop()
{
	if (this->mCount == 0)
	{
		std::cout << "STACK is empty" << std::endl;
		return;
	}

	ElementSTACK* pop = this->mTop;
	std::cout << "POP! : " << pop->mValue << std::endl;

	this->mTop = pop->mNext;
	delete pop;

	this->mCount--;
}

void StackClass::DeleteAll()
{
	ElementSTACK* element = this->mTop;
	while (this->mTop != nullptr)
	{
		element = this->mTop;
		this->mTop = element->mNext;
		delete element;
	}
	this->mCount = 0;
	std::cout << "Delete all elements" << std::endl;
}
