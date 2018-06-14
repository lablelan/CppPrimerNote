#include <iostream>
#include <vector>

using PF = int (*)(int, int);

int f1(int i1, int i2)
{
    return i1 * i2;
}

int f2(int i1, int i2)
{
    return i1 - i2;
}

int main()
{
    std::vector<PF> v;

    v.push_back(f1);
    v.push_back(f2);

    std::cout << v[0](1,2) << std::endl;
    std::cout << v[1](8,2) << std::endl;


    return 0;
}
