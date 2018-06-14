#include <iostream>
/*
 * (a) 重载calc函数
 * (b) 重载calc函数
 * (c) 不合法，产生二义性，当实参是顶层const指针时，形参是指针还是顶层const指针并没有实质上的区别，区别在于函数内是否能改变实参指针的指向，如果是需要实参作为输出的应该用顶层const指针作为形参防止函数内改变实参的指向。
 */

int calc(int&, int&)
{
    return 0;
}

int calc(const int&, const int&)
{
    return 0;
}

int calc(char*, char*)
{
    return 0;
}

int calc(const char*, const char*)
{
    return 0;
}

int calc(char* const c1, char* const c2)
{
    char *a = nullptr;
    c1 = a;

    return 0;
}


int main()
{
    
    return 0;
}
