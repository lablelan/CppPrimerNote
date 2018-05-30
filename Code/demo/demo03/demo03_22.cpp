#include <iostream>
#include <vector>
#include <cctype>

int main()
{
    std::vector<std::string> text;

    // 模拟存放两个段落到text
    std::string s1 = "hello world";
    std::string s2;
    std::string s3 = "hi world";

    text.push_back(s1);
    text.push_back(s2);
    text.push_back(s3);

    for (auto iter = text.begin(); iter != text.end() && !iter->empty(); ++iter)
    {
        for (auto &c : (*iter))
        {
            c = toupper(c);
        }
        std::cout << *iter << std::endl;
    }

    return 0;
}
