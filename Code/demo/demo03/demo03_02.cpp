#include <iostream>

int main()
{
    std::string s1;
    getline(std::cin, s1);
    std::cout << s1 << std::endl;

    std::string s2;
    std::cin >> s2;
    std::cout << s2 << std::endl;

    return 0;
}
