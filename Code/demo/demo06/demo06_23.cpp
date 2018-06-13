#include <iostream>

void print1(int* arr_ptr, int arr_size)
{
    for (int i = 0; i < arr_size; ++i)
    {
        std::cout << arr_ptr[i] << std::endl;
    }
}

void print2(int (&arr)[2])
{
    for (const auto& i : arr)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    int i = 0, j[2] = {0, 1};

    print1(&i, 1);
    print1(j, 2);
    print2(j);

    return 0;
}
