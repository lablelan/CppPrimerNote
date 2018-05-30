
#include <iostream>

int main()
{
    typedef char *pstring;

    char buf[2048] = "123456";
    const pstring cstr = buf;    // cstr是一个const char *类型
    const pstring *ps;           // ps是一个const char * const *类型

    std::cout << cstr << std::endl;
    

    return 0;
}
