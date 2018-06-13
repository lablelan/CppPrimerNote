#include <iostream>

int abs(int num)
{
    int ret = num >= 0 ? num : -num;
    return ret;
}

int main()
{
    int a = 0;
    std::cin >> a;
    std::cout << abs(a) << std::endl;

    return 0;
}
