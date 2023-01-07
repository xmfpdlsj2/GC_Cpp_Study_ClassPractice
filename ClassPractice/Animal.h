#pragma once
#include <iostream>

class Animal
{
protected:
	int mAge;
	int mWeight;

public:
	Animal();
	Animal(int age, int weight);
	~Animal();

	int GetAge() const;
	void SetAge(int age);
	int GetWeight() const;
	void SetWeigth(int weight);

	void Sound();
};

