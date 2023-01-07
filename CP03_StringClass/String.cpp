#include "String.h"

String::String() : String::String(0)
{
}

String::String(int length)
{
	mLength = length;

	mStr = new char[length + 1];
	if (length == 0)
	{
		mStr[0] = '\0';
	}
	else
	{
		for (int i = 0; i <= length; i++)
		{
			mStr[i] = '\0';
		}
	}
}

String::String(const char literal[])
{
	int index{};
	while (literal[index] != '\0')
	{
		index++;
	}
	mLength = index;
	mStr = new char[mLength + 1];

	for (int index = 0; index < mLength; index++)
	{
		mStr[index] = literal[index];
	}
	mStr[index] = '\0';
}

String::String(const String& from)
{
	mLength = from.mLength;
	mStr = new char[mLength + 1];
	for (int i = 0; i < mLength; i++)
	{
		mStr[i] = from.mStr[i];
	}
	mStr[mLength] = '\0';
}

String::~String()
{
	delete[] mStr;
	mStr = nullptr;
	this->mLength = 0;
}

void String::Print() const
{
	std::cout << mStr << std::endl;
}

char String::operator[](int index) const
{
	std::cout << "Const []" << std::endl;

	return index > mLength ? mStr[mLength] : mStr[index];
}

char& String::operator[](int index)
{
	std::cout << "Ref []" << std::endl;

	if (index > mLength)
	{
		std::cerr << "Invalid Index!" << std::endl;
		return mStr[mLength];
	}
	else
	{
		return mStr[index];
	}
	//return index >= mLength ? mStr[mLength] : mStr[index];
}

String& String::operator=(const String& str)
{
	if (this == &str)
	{
		return *this;
	}

	mLength = str.mLength;

	delete[] mStr;
	mStr = new char[mLength + 1];
	for (int i = 0; i <= mLength; i++)
	{
		mStr[i] = str.mStr[i];
	}
	return *this;
}

String String::operator+(const String& str)
{
	String result{ mLength + str.mLength };

	int index{};
	for (int i = 0; i < mLength; i++, index++)
	{
		result[index] = mStr[i];
	}
	for (int i = 0; i < str.mLength; i++, index++)
	{
		result[index] = str[i];
	}
	result[index] = '\0';

	return result;
}

void String::operator+=(const String& str)
{
	*this = *this + str;
}

std::ostream& operator<<(std::ostream& os, const String& str)
{
	os << str.mStr;
	return os;
}
