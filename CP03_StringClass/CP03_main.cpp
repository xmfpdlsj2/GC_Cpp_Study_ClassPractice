

#include <iostream>
#include "String.h"


int main()
{
	String str0{ 0 };
	String str1{ "abc" };
	String str2{ str1 };
	String str3{ " DEF"};
	str2.Print();

	const String strConst{ "hied" };
	std::cout << strConst[3] << std::endl;
	std::cout << str1 << std::endl;

	str1 += str2;
	str1.Print();
}

// 구글 클래스 제출
// String 클래스
// 1. String 클래스를 만들어 봅시다.
// 빈 문자열 생성 가능: String str => ""
// 길이 지정 생성 가능: String emptry(3) => "\0\0\0\0"
// 문자열 리터럴로 생성 가능: String str("test"
// 다른 문자열 객체에서 생성: String str2(str) => "test
// 배열첨자연산자
// = 연산
// + 연산: "hello" + "world" = "helloworld"
// += 연산: str += str2
// << 연산: std::cout << str