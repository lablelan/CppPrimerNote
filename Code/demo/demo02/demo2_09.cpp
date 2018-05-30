#include <iostream>

int main()
{
    //std::cin >> int input_value;
    // error: expected primary-expression before ‘int’
    
    int i = { 3.14 };
    // 没警告，丢失精度
    
    //double salary = wage = 9999.99;
    // 错误，double不支持连=操作，如果需要连=操作需要在类中重载=号操作符

    int j = 3.14;
    // 没警告，丢失精度
    

    return 0;
}
