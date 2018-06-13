#include <iostream>

// initializer_list元素本身就是常量，auto推导出来后也是常量，可以不加const，但加上有提示作用
// error: passing ‘const std::basic_string<char>’ as ‘this’ argument of ‘std::basic_string<_CharT, _Traits, _Alloc>& std::basic_string<_CharT, _Traits, _Alloc>::operator=(const _CharT*) [with _CharT = char; _Traits = std::char_traits<char>; _Alloc = std::allocator<char>]’ discards qualifiers [-fpermissive]

void test(std::initializer_list<std::string> str_list)
{
    for (auto &s : str_list)
    {
        s = "hah";
    }
}

int main()
{
    

    return 0;
}
