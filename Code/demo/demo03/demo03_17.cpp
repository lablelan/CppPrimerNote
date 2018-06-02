#include <iostream>
#include <vector>
#include <cctype>

int main()
{
    std::string str;
    std::vector<std::string> svec;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> str;
        svec.push_back(str);
    }

    for (auto &s : svec)
    {
        for (auto &c : s)
        {
            c = toupper(c);
        }
        std::cout << s << std::endl;
    }

    return 0;
}
