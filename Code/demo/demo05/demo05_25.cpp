#include <iostream>
#include <stdexcept>

int main()
{
    int a = 0, b = 0;
    while(true)
    {
        try
        {
            std::cin >> a >> b;
            if (b == 0)
            {
                throw std::overflow_error("the second num is zero");
            }
            std::cout << static_cast<double>(a) / b << std::endl;
        }
        catch(std::overflow_error err)
        {
            std::cout << err.what() << std::endl;
            std::cout << "\nTry Again?Enter y or n" << std::endl;
            char c;
            if (!(std::cin >> c) || c == 'n')
            {
                break;
            }
        }
    }

    return 0;
}
