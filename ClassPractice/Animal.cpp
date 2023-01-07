#include "Animal.h"

Animal::Animal() : mAge{ 1 }, mWeight{ 1 }
{
}

Animal::Animal(int age, int weight) :
	mAge{ age }, mWeight{ weight }
{

}

Animal::~Animal()
{
}

int Animal::GetAge() const
{
	return mAge;
}

void Animal::SetAge(int age)
{
	mAge = age;
}

int Animal::GetWeight() const
{
	return mWeight;
}

void Animal::SetWeigth(int weight)
{
	mWeight = weight;
}

void Animal::Sound()
{
	std::cout << "Do Some Noise!" << std::endl;
}
