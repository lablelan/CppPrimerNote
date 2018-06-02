#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec(10, 42);

    for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
    {
        *iter = (*iter << 1);               // 左移一位相当于 乘2
        std::cout << *iter << std::endl;
    }

    return 0;
}

