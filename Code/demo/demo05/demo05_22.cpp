#include <iostream>

int get_size()
{
    return 5;
}

int main()
{
    int sz = 0;
    do
    {
        sz = get_size();
        std::cout << "do:" << sz << std::endl;
    }
    while(sz <= 0);

    return 0;
}
