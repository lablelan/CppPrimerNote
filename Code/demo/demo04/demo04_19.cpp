#include <iostream>
#include <vector>

int main()
{
    int *ptr;
    std::vector<int> vec = { 1, 2, 3 };
    int ival = 0;

    ptr != 0 && *ptr++;     // 地址步长+1，访问了不该访问的内存
    ptr != 0 && (*ptr)++;   // 修正成取ptr的值+1

    ival++ && ival;         // ival自增

    vec[ival++] <= vec[ival];// 同一项进行比较，没有什么意义
    vec[ival +1] <= vec[ival];// 后一项和当前项比较


    return 0;
}
