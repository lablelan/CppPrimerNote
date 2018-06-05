#include <iostream>

int main()
{
    int i = 0;
    //42 = i;    // 常量不能做左值
    if (i = 42)
    {
        std::cout << "alway true" << std::endl;
    }


    return 0;
}
