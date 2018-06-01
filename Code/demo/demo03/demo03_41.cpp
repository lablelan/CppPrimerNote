#include <iostream>
#include <vector>

int main()
{
    int arr[4] = { 1, 2, 4, 5 };

    std::vector<int> iv(std::begin(arr), std::end(arr));
    for (auto i : iv)
    {
        std::cout << i << std::endl;
    }


    return 0;
}
