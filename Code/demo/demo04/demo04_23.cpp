#include <iostream>

int main()
{
    std::string s = "word";
    std::string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");

    return 0;
}
