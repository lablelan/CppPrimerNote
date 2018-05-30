#include <iostream>

int main()
{
    std::string s;
    std::string sp;
    while(true)
    {
        std::string s1;
        std::cout << "Please enter a word: ";
        std::cin >> s1;
        if (s1 == "quit")
        {
            break;
        }
        s = s + s1;
        if (sp.empty())
        {
            sp = s1;
        }
        else
        {
            sp = sp + " " + s1;
        }
    }

    std::cout << s << std::endl;
    std::cout << sp << std::endl;

    return 0;
}
