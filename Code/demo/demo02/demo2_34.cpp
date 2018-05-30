#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    // demo
    a = 42;     // 合法
    b = 42;     // 合法，b是一个整型
    c = 42;     // 合法，c是一个整型
    //d = 42;     // 不合法，d是int *类型，42不是int *类型
    //e = 42;     // 不合法，&ci是底层const, e是int *const类型
    g = 42;     // 不合法，g是const int&

    return 0;
}

