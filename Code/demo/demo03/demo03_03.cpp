#include <iostream>

// 
// 输入运算符：忽略字符串头的所有空白字符，遇到第一个非字符串头空白字符截断
// getline:读取一行，直到遇到换行符
//

int main()
{
    /*
    std::string s1;
    std::cin >> s1;
    std::cout << s1 << std::endl;
    std::cout << s1.size() << std::endl;
    */

    std::string s2;
    getline(std::cin, s2);
    std::cout << s2 << std::endl;
    std::cout << s2.size() << std::endl;
    
    return 0;
}
