#include <iostream>

// 定义时const在auto之前，变量就是顶层const
// 指向const修饰的变量时，auto推导的类型是底层const

int main()
{
    const int i = 42;
    
    auto j = i;          // j是int类型
    const auto &k = i;   // k是const int const&类型
    auto *p = &i;        // p是int const *类型
    const auto j2 = i, &k2 = i; // j2是const int类型， k2是const int const&类型

    // 检测
    j = 1;      // pass
    //k = 1;    // err
    int a = 1;
    p = &a;     // pass
    //j2 = 1;   // err
    //k2 = 1;   // err



    return 0;
}
