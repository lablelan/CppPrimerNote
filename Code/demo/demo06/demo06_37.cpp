#include <iostream>

static std::string s_arr[10] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };

// 使用类型别名
std::string (&getarr1())[10]
{
    return s_arr;
}

// 使用尾置返回类型
auto getarr2() -> std::string (&)[10]
{
    return s_arr;
}

// 使用decltype
decltype(s_arr) &getarr3()
{
    return s_arr;
}

int main()
{
    auto arr1 = getarr1();
    auto arr2 = getarr2();
    auto arr3 = getarr3();

    for (int i = 0; i < 10; ++i)
    {
        std::cout << arr1[i] << std::endl;
        std::cout << arr2[i] << std::endl;
        std::cout << arr3[i] << std::endl;
    }


    return 0;
}
