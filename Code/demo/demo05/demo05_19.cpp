#include <iostream>

int main()
{
    do
    {
        std::string s1, s2;
        std::cout << "Please enter s1:";
        std::cin >> s1;
        std::cout << "Please enter s2:";
        std::cin >> s2;
        std::string &s = s1.size() > s2.size() ? s1 : s2;
        std::cout << s << std::endl;
    }
    while(true);

    return 0;
}
