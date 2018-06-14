#include <iostream>

static std::string s_arr[10] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };

// 返回一个指向数组指针的指针
std::string (*getStringArr())[10]
{
    return &s_arr;
}

// 发回一个数值指针的引用
std::string (&getStringArray())[10]
{
    return s_arr;
}

int main()
{
    std::string (*s_arr)[10] = getStringArr();
    std::cout << (*s_arr)[1] << std::endl;
    

    std::string (&s_array)[10] = getStringArray();
    std::cout << s_array[1] << std::endl;

    return 0;
}
