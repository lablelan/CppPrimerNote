#include <iostream>
#include <cctype>

int main()
{
    std::string str = "hello. worl.d";
    std::string tmp_str;
    for (auto &c : str)
    {
        if (!ispunct(c))
        {
            tmp_str = tmp_str + c;
        }
    }

    str = tmp_str;

    std::cout << str << std::endl;

    return 0;
}

