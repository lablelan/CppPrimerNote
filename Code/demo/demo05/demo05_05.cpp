#include <iostream>

char gradeExchangeLetter(int grade)
{
    const std::string s = "ABCDE";
    char ret = ' ';
    int idx = s.size() - grade / (100 / s.size());
    if (idx < s.size() && idx >= 0)
    {
        ret = s[idx];
    }

    return ret;
}

int main()
{
    std::cout << gradeExchangeLetter(100) << std::endl;

    return 0;
}
