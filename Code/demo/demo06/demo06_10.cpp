#include <iostream>

void exchangeValue(int *num1, int *num2)
{
    int num_tmp = 0;
    num_tmp = *num1;
    *num1 = *num2;
    *num2 = num_tmp;
}

int main()
{
    int num1 = 2, num2 = 3;

    exchangeValue(&num1, &num2);
    std::cout << num1 << " " << num2 << std::endl;

    return 0;
}
