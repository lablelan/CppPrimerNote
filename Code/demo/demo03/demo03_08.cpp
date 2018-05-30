#include <iostream>

int main()
{
    std::string str1 = "hello wrold!";

    for (auto &c : str1)
    {
        c = 'X';
    }
    std::cout << str1 << std::endl;

    std::string str2 = "hi world!";

    int i = 0;
    while(i <= str2.size())
    {
        auto &c = str2[i];
        c = 'X';
        i++;
    }
    std::cout << str2 << std::endl;


    return 0;
}
