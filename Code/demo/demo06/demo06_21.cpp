#include <iostream>

int getMaxNum(int num1, const int *num2)
{
    int ret = 0;
    ret = num1 > *num2 ? num1 : *num2;

    return ret;
}

int main()
{
    int num1 = 10, num2 = 20;
    std::cout << getMaxNum(num1, &num2) << std::endl;

    return 0;
}
