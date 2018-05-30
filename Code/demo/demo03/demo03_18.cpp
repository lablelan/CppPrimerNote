#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    //ivec[0] = 42;   // 不合法，不能用下标插入值
    ivec.push_back(42);

    return 0;
}
