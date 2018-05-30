#include <iostream>

int main()
{
    int month1 = 9, day1 = 7;                               // 默认是十进制

    int month2 = 09, day2 = 07;                             // 0表示八进制，如果是09的话编译不过

    std::cout << month1 << " " << day1 << std::endl;
    std::cout << month2 << " " << day2 << std::endl;  
    // 编译不过：invalid digit "9" in octal constant，八进制最大值是每位的7

    std::cout << 0e0 << std::endl;
    
    return 0;
}
