#pragma once
#include <iostream>

class String
{
private:
	int mLength;
	char* mStr;

public:
	String();
	String(int length);
	String(const char literal[]);
	String(const String& from);
	~String();

public:
	char operator[](int index) const;
	char& operator[](int index);
	String& operator=(const String& str);
	String operator+(const String& str);
	void operator+=(const String& str);

public:
	void Print() const;

	friend std::ostream& operator<<(std::ostream& os, const String& str);
};

