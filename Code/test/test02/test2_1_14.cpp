#include <iostream>

// const在*前不能改变指针指向的内存内容
// const在*后不能改变指针的指向

int main()
{
    int a = 123;
    const int* b = &a;         
    int* const c = &a;
    //*b = 10;      //error: assignment of read-only location ‘* b’ 
    
    *c = 11;
    int d = 145;
    //c = &d;         //assignment of read-only variable ‘c’
   
    std::cout << "*b: " << *b << " *c: " << *c << std::endl;

    return 0;
}
