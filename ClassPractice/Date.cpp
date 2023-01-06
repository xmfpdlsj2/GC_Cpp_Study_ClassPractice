#include "Date.h"

Date::Date() : Date(1970, 1, 1)
{
}

Date::Date(int year, int month, int day) :
	mYear{ year }, mMonth{ month }, mDay{ day }
{
	if (year < 0 || month < 0 || day < 0)
	{
		return;
	}
}

void Date::Print()
{
	std::cout << this->mYear << " / "
		<< this->mMonth << " / "
		<< this->mDay << std::endl;
}
