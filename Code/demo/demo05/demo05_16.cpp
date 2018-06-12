#include <iostream>

/*
 * 如果只能使用一种循环尽量使用for循环，可读性更强，有明确的循环次数，不容易漏写.
 */

int main()
{
    int i = 0;
    const int LOOP_TIMES = 3;
    while (i < LOOP_TIMES)
    {
        std::cout << i << std::endl;

        ++i;
    }

    for (int i = 0; i < LOOP_TIMES; ++i)
    {
        std::cout << i << std::endl;
    }


    return 0;
}
