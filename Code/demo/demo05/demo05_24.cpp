#include <iostream>
#include <stdexcept>

// expected ‘catch’ before numeric constant

int main()
{
    int a=0, b=0;
    std::cin >> a >> b;
    try
    {
        std::cout << static_cast<double>(a) / b << std::endl;
    }


    return 0;
}
