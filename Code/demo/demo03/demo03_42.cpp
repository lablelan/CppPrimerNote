#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iv = { 0, 2, 4 };
    int arr[iv.size()];

    for (decltype(iv.size()) i = 0; i < iv.size(); ++i)
    {
        arr[i] = iv[i];
    }

    for (auto i : arr)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
