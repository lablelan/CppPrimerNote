#include <iostream>

/*
 * (a) 非法，没有传入实参
 * (b) 合法
 * (c) 合法，但与初衷不符，wd希望的是一个整型值
 */

char *init(int ht, int wd = 80, char bckgrnd = ' ')
{
    return nullptr;
}

int main()
{
    //init();
    init(24, 10);
    init(14, '*');

    return 0;
}
