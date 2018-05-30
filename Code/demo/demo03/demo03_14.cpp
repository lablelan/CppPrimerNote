#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    for (int i = 0; i < 3; i++)
    {
        int input = 0;
        std::cin >> input;
        ivec.push_back(input);
    }

    for (auto a : ivec)
    {
        std::cout << a << std::endl;
    }

    return 0;
}
