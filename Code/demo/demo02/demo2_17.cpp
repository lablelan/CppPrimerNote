#include <iostream>

// 都输出10

int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;

    std::cout << i << " " << ri << std::endl;

    return 0;
}
