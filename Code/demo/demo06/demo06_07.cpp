#include <iostream>

int testfunc(int num)
{
    static int offset = 0;
    
    int ret = num + offset;

    offset = 1;

    return ret;
}

int main()
{

    for (int i = 0; i < 3; ++i)
    {
        std::cout << testfunc(i) << std::endl;
    }

    return 0;
}
