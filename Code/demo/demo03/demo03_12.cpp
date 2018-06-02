#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> ivec;       // 正确，得到一个存放vector<int>类型的ivec
    //std::vector<std::string> svec = ivec;          // 错误，类型不一致
    std::vector<std::string> svec(10, "null");// 正确，得到一个存放10个null字符串的svec

    return 0;
}
