#include <iostream>
#include <vector>

int main()
{
    int ia[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int ai[10] = { 0 };
    for (int i = 0; i < 10; ++i)
    {
        ai[i] = ia[i];
    }

    std::vector<int> av = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> va = av;
    for (auto a : va)
    {
        std::cout << a << std::endl;
    }


    return 0;
}
