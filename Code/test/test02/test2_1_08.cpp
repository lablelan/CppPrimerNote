#include <iostream>

const int reused = 42;

int main()
{
    int unique = 0;

    std::cout << reused << " " << unique << std::endl;
    
    // 局部变量覆盖全局变量
    int reused = 0;
    std::cout << reused << " " << unique << std::endl;

    // 访问全局变量
    std::cout << ::reused << " " << unique << std::endl;

    return 0;
}
