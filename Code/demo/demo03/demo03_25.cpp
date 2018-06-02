#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec(11, 0);

    int grade = 0;
    while(grade != -1)
    {
        std::cin >> grade;
        auto iter = ivec.begin();
        if(grade>100 || grade < 0)
        {
            continue;
        }
        iter += grade/10;
        std::cout << grade/10 << std::endl;
        (*iter)++;
    }

    for (auto i : ivec)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
