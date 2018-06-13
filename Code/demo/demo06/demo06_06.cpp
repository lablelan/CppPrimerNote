#include <iostream>

size_t print_int(int num)
{
    static size_t count = 0;
    ++count;

    std::cout << num << std::endl;
    return count;
}

int main()
{
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "func execute " << print_int(i) << " times" << std::endl;
    }

    return 0;
}
