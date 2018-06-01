#include <iostream>
#include <vector>

using int_array = int[4];           // 等价于int(&p)[4]; 其中()不能省略

int main()
{
    int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11 };
    // 版本1 范围for循环
    for (int (&i)[4] : ia)
    {   
        for (int &a : i)
        {
            std::cout << a << std::endl; 
        }
    }
    // 版本2 下标运算符循环
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << ia[i][j] << std::endl;
        }
    }
    // 版本3 下标运算符循环(指针)
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << *(*(ia + i) + j) << std::endl;
        }
    }

    return 0;
}
