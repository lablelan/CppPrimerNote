#include <iostream>
#include <vector>

int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    // 迭代
    auto pbegin = std::begin(a);
    auto pend = std::end(a);
    for (pbegin; pbegin != pend; ++pbegin)
    {
        *pbegin = 0;
    }

    for (int *i = a; i != &a[5]; ++i)
    {
        std::cout << *i << std::endl;
    }

    return 0;
}
