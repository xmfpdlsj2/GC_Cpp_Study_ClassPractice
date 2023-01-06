#include "Coordinate.h"

void Coordinate::SetCoordinate(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Coordinate::PrintCoordinate() const
{
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}

float Coordinate::GetDistanceFromZero() const
{
	return std::sqrtf(std::powf((float)this->x, 2.0f) + std::powf((float)this->y, 2.0f));
}
