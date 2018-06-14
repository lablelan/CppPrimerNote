#include <iostream>
#include <vector>

typedef int (*Func)(int i1, int i2);

int add(int i1, int i2)
{
    return i1 + i2;
}

int sub(int i1, int i2)
{
    return i1 - i2;
}

int mul(int i1, int i2)
{
    return i1 * i2;
}

int divv(int i1, int i2)
{
    return i1 / i2;
}

int main()
{
    std::vector<Func> v;    
    v.push_back(add);
    v.push_back(sub);
    v.push_back(mul);
    v.push_back(divv);

    int a = 4, b = 6;
    for (auto f : v)
    {
        std::cout << f(a, b) << std::endl;
    }

    return 0;
}
