// 상속과 템플릿을 이용해 스택, 큐 클래스 만들어 보기.

#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
	Stack<int> stack{};
	stack.Push(1);
	stack.Print();
	stack.Push(2);
	stack.Push(3);
	stack.Print();
	stack.Pop();
	stack.Print();
	stack.Pop();
	stack.Push(5);
	stack.Print();
	stack.Pop();
	stack.Print();

	Queue<std::string> queue{};
	queue.Push("호준");
	queue.Print();
	queue.Push("현국");
	queue.Print();
	queue.Push("보규");
	queue.Print();
	queue.Pop();
	queue.Print();
	queue.Pop();
	queue.Print();
	queue.Push("민석");
	queue.Push("선국");
	queue.Push("대훈");
	queue.Print();
	queue.DeleteAll();
	queue.Print();
}
