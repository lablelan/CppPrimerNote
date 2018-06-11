#include <iostream>
#include <map>

int main()
{
    std::string s;
    std::map<std::string, int> s_map;
    
    while(std::cin >> s)
    {
        if (s == "!")
        {
            break;
        }
        ++s_map[s];
    }

    int max_count = 0;
    std::string s_tmp;
    for (auto iter : s_map)
    {
        if (max_count < iter.second)
        {
            s_tmp = iter.first;
            max_count = iter.second;
        }
    }

    std::cout << s_tmp << " : " << max_count << std::endl;

    return 0;
}
