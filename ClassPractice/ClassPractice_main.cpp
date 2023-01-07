#include "Coordinate.h"
#include "StudentInfo.h"
#include "Date.h"
#include "StringClass.h"
#include "Point2D.h"
#include "Dog.h"


void Main_coordinate();
void Main_studentInfo();
void Main_date();
void Main_stringClass();
void Main_point2DClass();
void Main_Animal_Inherit();

int main()
{
    //Main_Coordinate();
    //Main_studentInfo();
    //Main_date();
    //Main_stringClass();
    //Main_point2DClass();
    Main_Animal_Inherit();
}

void Main_coordinate()
{
    // 구글 클래스 제출 클래스 연습
    // 1. 2차원의 좌표를 표현하는 클래스
    int inputX{}, inputY{};
    std::cout << "x좌표와 y좌표를 입력하세요: ";
    std::cin >> inputX >> inputY;
    
    Coordinate myCoordinate{};
    myCoordinate.SetCoordinate(inputX, inputY);
    myCoordinate.PrintCoordinate();
    std::cout << "원점에서 좌표까지의 거리: " << myCoordinate.GetDistanceFromZero() << std::endl;
}

void Main_studentInfo()
{
    // 2. 학생정보를 표현하는 클래스
    StudentsInfo info{};
    info.SetInfo(2, "HoJun", 98);
    info.PrintInfo();
}

void Main_date()
{
    // 구글 클래스 제출
    // 1.날짜를 처리하는 Date 클래스를 설계해보세요.
    // 년, 월, 일을 나타내는 int 멤버들은 private 설계
    // 생성자를 통해서 년 월 일 을 초기화
    // 2022 / 11 / 24 형태로 출력하는 Print 함수
    Date date{ 2022,11,24 };
    date.Print();
}

void Main_stringClass()
{
    // 2.주어진 문자열 리털럴로 생성이 가능한 String 클래스를 설계해보세요. 
    // String str1{ "Hello World " };
    // String str2{ "A" };
    // str1.Print();
    // str2.Print();

    StringClass str{ "This is String Class!!!" };
    str.Print();
}

void Main_point2DClass()
{
    // 연산자 오버로딩 연습
    Point2D pt1{ 1,2 };
    std::cout << pt1 + Point2D{ 1, 5 } << Point2D{ 4, 11 };

    Point2D pt2 = pt1++;
    std::cout << pt2;
    std::cout << pt1;
    std::cout << pt2++;
    std::cout << ++pt2;
}

void Main_Animal_Inherit()
{
    // 클래스 상속 연습 및 상향변환
    Dog happy;
    happy.Sound();
    happy.Hand();

    std::unique_ptr<Animal> animal{ std::make_unique<Dog>() };
    animal->Sound();
}
