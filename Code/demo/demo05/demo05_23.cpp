#include <iostream>
#include <stdexcept>

int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    std::cout << static_cast<double>(a) / b << std::endl;

    return 0;
}
