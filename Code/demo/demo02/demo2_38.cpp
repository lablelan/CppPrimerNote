// 区别：
// 1.auto会忽略顶层const
// 2.auto推导时，如果是引用类型会推导成引用指向的变量类型
// 3.decltype不会忽略const
// 4.decltype推导引用类型时保持引用类型
// 5.decltype推导时，如果是表达式都推导成引用类型


#include <iostream>

int main()
{
    int a = 10;
    
    // 类型一样
    auto i = a;
    decltype(a) b = a;

    // 类型不一样
    const int c = 10;
    auto k = c;
    decltype(c) j = c;
    k = 111;
    j = 111;


    return 0;
}
