#include "StudentInfo.h"

void StudentsInfo::SetInfo(int number, std::string name, int score)
{
	if (number <= 0 || score < 0 || score > 100 || name.length() == 0)
	{
		return;
	}
	this->number = number;
	this->name = name;
	this->score = score;
}

void StudentsInfo::PrintInfo() const
{
	if (number <= 0 || score < 0 || score > 100 || name.length() == 0)
	{
		std::cout << "�Է��� �߸��Ǿ����ϴ�." << std::endl;
		return;
	}
	std::cout << this->number << " " << this->name << " : " << this->score << "��" << std::endl;
}
