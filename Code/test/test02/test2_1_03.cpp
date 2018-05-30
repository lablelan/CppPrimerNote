#include <iostream>

// 如果i==0时再--，i将会等于4294967295，32位的最大值

int main()
{
    unsigned int u = 0;
    u--;
    std::cout << u << std::endl;
    for (unsigned int i = 10; i >= 0; i--)
    {
       // std::cout<< i << std::endl;
    }
    
    return 0;
}
