#include <iostream>

// =号操作符返回的是左值的引用

int main()
{
    double dval;
    int ival;
    int *pi;
    (int *&)dval = (int* &)ival = (pi = (int *)0);
    std::cout << dval << " " << ival << " " << pi <<  std::endl;


    return 0;
}
