#include <iostream>

// 当cp不为nullptr时并且cp[0]的ASCII码不为0时条件为真

int main()
{
    const char *cp = "Hello World";
    if (cp && *cp)
    {
        std::cout << "cp != NULL, *cp != 0" << std::endl;
    }


    return 0;
}
