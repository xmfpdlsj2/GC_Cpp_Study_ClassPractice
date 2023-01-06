#pragma once
#include <iostream>

class Date
{
private:
	int mYear;
	int mMonth;
	int mDay;

public:
	Date();
	Date(int year, int month, int day);

public:
	void Print();
};

