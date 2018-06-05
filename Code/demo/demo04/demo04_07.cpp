#include <iostream>

int main()
{
    short s = 32768;

    short s1 = s;
    s1++;
    std::cout << s1 << std::endl;

    short s2 = s;
    s2 *= 2;
    std::cout << s2 << std::endl;

    short s3 = -s;
    s3--;
    std::cout << s3 << std::endl;

    return 0;
}
