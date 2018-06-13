#include <iostream>
#include <cctype>

bool strHasUpper(const std::string &s)
{
    bool ret = false;
    for (const auto &c : s)
    {
        if (isupper(c))
        {
            ret = true;
        }
    }

    return ret;
}

void lower2upper(std::string &s)
{
    for (auto &c : s)
    {
        c = tolower(c);
    }
}

int main()
{
    std::string s;
    std::cin >> s;

    if (strHasUpper(s))
    {
        std::cout << "string has upper" << std::endl;
        lower2upper(s);
    }
    std::cout << s << std::endl;

    return 0;
}
