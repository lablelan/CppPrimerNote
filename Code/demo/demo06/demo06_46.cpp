#include <iostream>

// constexpr函数不能执行任何操作语句

constexpr bool isShorter(const std::string& s1, const std::string& s2)
{
    const decltype(s1.size()) s1_size = s1.size();
    const decltype(s2.size()) s2_size = s2.size();

    return 0;
}


int main()
{
    

    return 0;
}
