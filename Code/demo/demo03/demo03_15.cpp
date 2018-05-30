#include <iostream>
#include <vector>

int main()
{
    std::string s;
    std::vector<std::string> svec;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> s;
        svec.push_back(s);
    }

    for (auto str : svec)
    {
        std::cout << str << std::endl;
    }

    return 0;
}

