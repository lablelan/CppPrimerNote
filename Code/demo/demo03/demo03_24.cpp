#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (auto iter1 = ivec.cbegin(); iter1 != ivec.cend() - 1; ++iter1)
    {
        std::cout << *iter1 + *(iter1 + 1) << std::endl;
    }

    auto begin = ivec.begin();
    auto end = ivec.end();
    auto mid = ivec.begin() + (end - begin)/2 + (end - begin)%2;
    //std::cout << begin + end << std::endl;    // 迭代器并没有实现+运算符
    std::cout << end - begin << std::endl;
    for (auto iter2 = ivec.cbegin(); iter2 != mid; ++iter2)
    {
        if (iter2 != end - 1)
        {
            std::cout << *iter2 + *(end-1) << std::endl;
        }
        else 
        {
            std::cout << *iter2 << std::endl;
        }
        --end;
    }

    return 0;
}
