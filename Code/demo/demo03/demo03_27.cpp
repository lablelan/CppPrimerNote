#include <stdio.h>

int txt_size()
{
    return 0;
}

int main ()
{
    unsigned int buf_size = 1024;
    //int ia[buf_size];    // 非标准用法，标准为数组定义长度必须为常量，非法。一些编译器合法。
    //int ia[4 * 7 - 14];    // 合法
    //int ia[txt_size()];    // 非法，一些编译器合法
    char st[11] = "fundamental"; // 非法，字符串包含\n字符，初始值过多


    return 0;
}
