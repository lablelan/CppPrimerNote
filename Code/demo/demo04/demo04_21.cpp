#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8 ,9 };

    for (auto &i : v)
    {
        i = i % 2 != 0 ? i * i : i;
    }

    for (auto i : v)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
