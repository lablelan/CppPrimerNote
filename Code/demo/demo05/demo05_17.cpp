#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = { 0, 1, 1, 2 }, v2 = { 0, 1, 1, 2, 3, 5, 8 };
    std::vector<int> &v1_tmp = v1;
    std::vector<int> &v2_tmp = v2;
    if (v1.size() > v2.size())
    {
        v1_tmp = v2;
        v2_tmp = v1;
    }

    int index = 0;
    for (index = 0; index < v1_tmp.size(); ++index)
    {
        if (v1_tmp[index] != v2_tmp[index])
        {
            break;
        }
    }
    if (index != v1_tmp.size())
    {
        std::cout << "is not prefix" << std::endl;
    }

    return 0;
}
