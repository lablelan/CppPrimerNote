#include <iostream>

void exchangeValue(int &num1, int &num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int main()
{
    int num1 = 2, num2 = 3;

    exchangeValue(num1, num2);
    std::cout << num1 << " " << num2 << std::endl;

    return 0;
}
