#include <iostream>
#include <cctype>

int main()
{
    std::string s;
    std::string s_tmp;

    while(std::cin >> s)
    {
        if (isupper(s[0]) && s == s_tmp)
        {
            std::cout << s << std::endl;
            break;
        }
        s_tmp = s;
        std::cout << "Please enter other word:" << std::endl;
    }

    return 0;
}
