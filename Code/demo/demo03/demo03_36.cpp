#include <iostream>
#include <vector>

bool isEqualIntArr(int arr1[],int arr1_count, int arr2[], int arr2_count)
{
    if (arr1_count != arr2_count)
    {
        return false;
    }

    for (int i = 0; i < arr1_count; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }

    return true;
}

bool isEqualIntVec(std::vector<int> &v1, std::vector<int> &v2)
{
    if (v1.size() != v2.size())
    {
        return false;
    }

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] != v2[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr1[3] = { 1, 2, 3 };
    int arr2[3] = { 1, 2, 3 };
    bool ia = isEqualIntArr(arr1, sizeof(arr1)/sizeof(*arr1), arr2, sizeof(arr2)/sizeof(*arr2));
    std::cout << ia << std::endl;

    std::vector<int> v1 = { 1, 2 ,3 };
    std::vector<int> v2 = { 1, 2, 3 };
    bool va = isEqualIntVec(v1, v2);
    std::cout << va << std::endl;

    return 0;
}
