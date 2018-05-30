#include <iostream>
#include "file_1.h"

extern const int bufSize = 12;

int main()
{
   // extern const int bufSize = 12;    //错误用法，extern不能在函数内使用
    
    std::cout << bufSize << std::endl;

    return 0;
}
