#include <iostream>

void exchangePoint(int **num1, int **num2)
{
    int *tmp;
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

int main()
{
    int a = 10, b = 20;
    int *num1 = &a, *num2 = &b;

    std::cout << "a point:" << &a << " " << "b point:" << &b << std::endl;
    std::cout << "num1 point:" << num1 << std::endl;
    std::cout << "num2 point:" << num2 << std::endl;
    exchangePoint(&num1, &num2);
    std::cout << "num1 point:" << num1 << std::endl;
    std::cout << "num2 point:" << num2 << std::endl;

    return 0;
}
