#include <iostream>

int main()
{
    int i = 0, j = 4, k = 3;

    if (i != j < k)
    {
        std::cout << "(i != j) < k" << std::endl;
    }
    else
    {
        std::cout << "i != (j < k)" << std::endl;
    }

    return 0;
}
