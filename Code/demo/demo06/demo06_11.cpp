#include <iostream>

void reset(int &i)
{
    i = 0;
}

int main()
{
    int i = 99;

    reset(i);

    std::cout << i << std::endl;

    return 0;
}
