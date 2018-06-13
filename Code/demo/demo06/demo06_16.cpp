#include <iostream>
/*
 * 形参是string &引用类型，无法接收常量引用类型
 */

bool is_empty(const std::string& s)
{

    return s.empty();
}

int main()
{

    return 0;
}
