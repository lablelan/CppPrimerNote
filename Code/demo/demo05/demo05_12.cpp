#include <iostream>

// 递归获取匹配字符串个数
// @source_str   源字符串
// @match_str    匹配的字符串
// @return       返回匹配个数
int matchString(std::string source_str, std::string match_str)
{
    int count = 0;

    std::string::size_type idx = std::string::npos;
    idx = source_str.find(match_str);
    if (idx != std::string::npos)
    {
        const char *s = source_str.c_str();
        s = &s[idx + match_str.size()];
        std::string s_tmp(s);
        //std::cout << s_tmp << std::endl;
        ++count;
        count += matchString(s_tmp, match_str);
    }
    
    return count;
}

int main()
{
    std::string str[] = { "ff", "fl", "fi" };

    std::string s;
    getline(std::cin, s);
    int count = 0;
    for (auto s_match : str)
    {
        count = matchString(s, s_match);
        std::cout<< s_match << " : " << count << std::endl;
    }
    

    return 0;
}
