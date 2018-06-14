#include <iostream>
#include <vector>

typedef int (*fPtr)(int, int);

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
    std::vector<fPtr> v;

    v.push_back(add);
    v.push_back(sub);
    v.push_back(mul);
    v.push_back(divv);

    for(auto f : v)
    {
        std::cout << f(10, 5) << std::endl;
    }

    return 0;
}
