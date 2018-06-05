#include <iostream>

void printCharBit(char c)
{
    for (int i = 0; i < 8; ++i)
    {
        if (c & 1 << i)
        {
            std::cout << 1;
        }
        else
        {
            std::cout << 0;
        }
    }
    std::cout << std::endl;
}

int main()
{
    char q = 'q';
    printCharBit(q);
    printCharBit(~q<<6);


    return 0;
}
