#include <iostream>

int main()
{
    int i = 1;
    double d = 1.1;
    i *= static_cast<int>(d);
    std::cout << i << std::endl;

    return 0;
}
