#include <iostream>

int f()
{
    return 0;
}

struct tmp_struct
{
    int mem[10];
};

int main()
{
    int x = 1, y = 2, a = 3, b = 4, i = 1;
    tmp_struct *p;
    std::cout << sizeof x + y << std::endl;     // 6
    std::cout << sizeof p->mem[i] << std::endl; // 4
    std::cout << (sizeof a < b) << std::endl;   // 0
    std::cout << sizeof f() << std::endl;       // 4

    std::cout << sizeof(x) + y << std::endl;
    std::cout << sizeof(p->mem[i]) << std::endl;
    std::cout << (sizeof(a) < b) << std::endl;
    std::cout << sizeof(f()) << std::endl;

    return 0;
}
