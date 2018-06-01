#include <iostream>

int main()
{
    const size_t array_size = 10;

    int ia[array_size] = { 0 };

    for (size_t ix = 0; ix < array_size; ++ix)
    {
        ia[ix] = ix;
        std::cout << ia[ix] << std::endl;
    }


    return 0;
}
