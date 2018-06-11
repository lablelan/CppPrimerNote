#include <iostream>

bool isVowel(char word)
{
    const std::string s = "AEIPUaeiou";

    std::cout << s.find(word) << std::endl;
    if (s.find(word) >= 0 && s.find(word) < s.size())
    {
        return true;
    }

    return false;
}

int main()
{
    int aCnt = 0;

    std::string s;
    std::cin >> s;
    for (auto c : s)
    {
        if (isVowel(c))
        {
            ++aCnt;
        }
    }

    std::cout << aCnt << std::endl;

    return 0;
}
