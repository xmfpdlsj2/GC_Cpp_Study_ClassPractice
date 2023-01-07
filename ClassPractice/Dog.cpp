#include "Dog.h"

Dog::Dog() : Animal(10, 5), mBreed{ NONE }
{

}

Dog::~Dog()
{
}

Dog::BREED Dog::GetBreed() const
{
	return mBreed;
}

void Dog::SetBreed(BREED breed)
{
	mBreed = breed;
}

void Dog::Hand()
{
	std::cout << "Hand.. " << std::endl;
}

void Dog::Sound()
{
	std::cout << "Bark!" << std::endl;
}
