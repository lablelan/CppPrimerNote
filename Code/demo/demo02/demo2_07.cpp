#include <iostream>

int main()
{
    float a = 1024f;                                          //error:invalid suffix "f" on integer constant
    //float a = 1024.0f;                                      // 不能使用1024f，必须使用1024.0f表示浮点数，
    std::cout << "a:" << "Who gose with F\145rgus?\012";
    std::cout << "b:" << 3.14e1L << std::endl;
    std::cout << "c:" << a << std::endl;
    std::cout << "d:" << 3.14L <<std::endl;

    return 0;
}
