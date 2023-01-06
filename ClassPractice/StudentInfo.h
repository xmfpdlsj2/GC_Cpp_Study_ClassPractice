#pragma once
#include <iostream>
#include <string>

class StudentsInfo
{
private:
	int number{}, score{};
	std::string name{ "GC 7th" };

public:
	void SetInfo(int number, std::string name, int score);
	void PrintInfo() const;
};

