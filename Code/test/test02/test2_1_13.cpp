#include <iostream>

int main()
{
    const double a = 3.14;

    int &b = a;     // invalid initialization of reference of type ‘int&’ from expression of type ‘const double’i
    int *c = &a;    // error: cannot convert ‘const double*’ to ‘int*’ in initialization
    double &d = a;  // invalid initialization of reference of type ‘double&’ from expression of type ‘const double’
    b = 11;

    std::cout << "a: " << a << " b: " << b << std::endl;

    std::cout << "a: " << a << " c: " << c << std::endl;

    return 0;
}
