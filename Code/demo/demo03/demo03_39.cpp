#include <iostream>
#include <cstring>

int main()
{
    std::string s1 = "hello", s2 = "hell";
    if (s1 == s2)
    {
        std::cout << "s1 == s2" << std::endl;
    }
    else if(s1 > s2)
    {
        std::cout << "s1 > s2" << std::endl;
    }
    else
    {
        std::cout << "s1 < s2" << std::endl;
    }
    
    char cs1[1024] = "hell";
    char cs2[1024] = "hello";

    if (strcmp(cs1, cs2) == 0)
    {
        std::cout << "cs1 == cs2" << std::endl;
    }
    else if(strcmp(cs1, cs2) > 0)
    {
        std::cout << "cs1 > cs2" << std::endl;
    }
    else 
    {
        std::cout << "cs1 < cs2" << std::endl;
    }



    return 0;
}
