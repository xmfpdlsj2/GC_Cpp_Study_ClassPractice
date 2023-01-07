#include "Point2D.h"

Point2D::Point2D(int x, int y) : mX{ x }, mY{ y }
{
}

Point2D::~Point2D()
{
}

Point2D Point2D::operator+(const Point2D& pt)
{
    return Point2D{ (mX + pt.mX), (mY + pt.mY) };
}

//friend Point2D operator++(const Point2D& op); // 전역함수라면
Point2D& Point2D::operator++()
{
    ++mX;
    ++mY;
    return (*this);
}

//friend Point2D operator++(Point2D& op, int x);
Point2D Point2D::operator++(int v)
{
    Point2D temp{ mX, mY };
    //++mX;
    //++mY;
    ++(*this);
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Point2D& pt)
{
    os << "(" << pt.mX << ", " << pt.mY << ")" << std::endl;
    return os;
}
