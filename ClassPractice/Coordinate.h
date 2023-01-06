#pragma once
#include <iostream>

class Coordinate
{
private:
	int x{};
	int y{};

public:
	void SetCoordinate(int x, int y);
	void PrintCoordinate() const;
	float GetDistanceFromZero() const;
};

