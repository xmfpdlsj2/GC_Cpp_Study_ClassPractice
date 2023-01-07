#pragma once
#include <iostream>

class Point2D
{
private:
	int mX{};
	int mY{};

public:
	Point2D(int x, int y);
	~Point2D();

	Point2D operator +(const Point2D& pt);
	
Point2D& operator ++();
Point2D operator ++(int v);

	friend std::ostream& operator << (std::ostream& os, const Point2D& pt);
};

