#include "StackClass.h"
#include "QueueClass.h"

enum Command
{
    PUSH = 1,
    POP,
    DELETE_ALL,
    END
};

void UnitTest();

template<typename T>
void StackQueueTest(T& ds);

int main()
{
    UnitTest();
}

void UnitTest()
{
    int input{}, stack{ 1 };
    std::cout << "[1 : Test Stack] [2 : Test Queue] : ";
    std::cin >> input;

    if (input == stack)
    {
        std::cout << "Start test [STACK]\n" << std::endl;
        StackClass stack{};
        StackQueueTest(stack);
    }
    else
    {
        std::cout << "Start test [QUEUE]\n" << std::endl;
        QueueClass queue{};
        StackQueueTest(queue);
    }
}

template<typename T>
void StackQueueTest(T& ds)
{
    int input{};
    bool isTesting{ true };

    while (isTesting)
    {
        std::cout << "[1 : push] [2: pop] [3: delete all] [extra: end] > ";
        std::cin >> input;
        switch (input)
        {
            case PUSH:
                std::cout << "Push value : ";
                if (!(std::cin >> input))
                {
                    std::cout << "잘못된 값을 push 했습니다. text를 종료합니다." << std::endl;
                    isTesting = false;
                }
                else
                {
                    ds.Push(input);
                    ds.Print();
                }
                break;

            case POP:
                ds.Pop();
                ds.Print();
                break;

            case DELETE_ALL:
                ds.DeleteAll();
                ds.Print();
                break;

            case END:
            default:
                isTesting = false;
                break;
        }
        std::cout << std::endl;
    }

    std::cout << "Stack class test, END" << std::endl;
}

