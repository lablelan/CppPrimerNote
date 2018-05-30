#include <iostream>

//  void* 泛型指针
//  1.泛型指针可以存放任意类型的指针
//  2.泛型指针没有实际步长,步长由强转后类型决定

int main()
{
    long long a = 1024;

    void *b = &a;

    //std::cout << *b <<std::endl;  //error: ‘void*’ is not a pointer-to-object type

    int* c = (int *)b;
    
    std::cout << *c << std::endl;

    return 0;
}
