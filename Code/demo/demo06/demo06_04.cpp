#include <iostream>

int fact(int num)
{
    int product = 1;

    for (int i = 1; i <= num; ++i)
    {
        product *= i;
    }
    
    return product;
}

int main()
{
    int input = 0;
    std::cin >> input;
    int product = fact(input);

    std::cout << product << std::endl;

    return 0;
}
