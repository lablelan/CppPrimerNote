#include <iostream>

char gradeExchangeLetter(int grade)
{
    const std::string s = "ABCDE";
    char ret = ' ';
    int idx = s.size() - grade / (100 / s.size());

    ret = idx >= 0 ? idx < s.size() ? s[idx] : ' ' : ' ';

    return ret;
}

int main()
{
    std::cout << gradeExchangeLetter(100) << std::endl;

    return 0;
}
