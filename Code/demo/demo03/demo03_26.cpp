#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    auto beg = ivec.begin();
    auto end = ivec.end();
    auto mid1 = beg + (end - beg) / 2;
    auto mid2 = (beg + end) / 2;    //  error: no match for ‘operator+’ (operand types are ‘__gnu_cxx::__normal_iterator<int*, std::vector<int> >’ and ‘__gnu_cxx::__normal_iterator<int*, std::vector<int> >’)


    return 0;
}
