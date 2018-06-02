#include <iostream>

// 合法，c的类型是const char &

int main()
{
    const std::string s = "Keep out!";
    for (auto &c : s)
    {
    
    }
    
    return 0;
}
