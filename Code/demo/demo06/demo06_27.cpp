#include <iostream>

int add(std::initializer_list<int> int_list)
{
    int sum = 0;

    for (auto &i : int_list)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    
    std::cout << add({1, 2, 3, 4, 5}) << std::endl;


    return 0;
}
