#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	enum BREED
	{
		BEAGLE,
		DOBERMAN,
		BERNARD,
		RETRIEVER,
		HUSKYK,
		CHIHUAHUA,
		SHIHTZU,
		NONE
	};

private:
	BREED mBreed;

public:
	Dog();
	~Dog();

	BREED GetBreed() const;
	void SetBreed(BREED breed);

	void Hand();
	void Sound();
};

