#include <iostream>

/*
 * 指向整数常量的指针和指向整数的常量指针的区别
 *      const int *a = 0;和constexpr int *a = 0;区别
 *      int *const a = 0;和constexpr int *a = 0;区别    
 *
 */

int j = 0;

int main()
{
    int a = 0;
    constexpr int *p1 = &j;
    *p1 = a;

    int *const p2 = &a;
    *p2 = 1;
    

    return 0;
}
