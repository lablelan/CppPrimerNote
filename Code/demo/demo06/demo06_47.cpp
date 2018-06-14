#include <iostream>
#include <vector>

void printVec(std::vector<int> &v, int index)
{
    if (index >= v.size() || index < 0)
    {
        return;
    }
    printVec(v, index - 1);
    std::cout << v[index] << std::endl;
    #ifdef NDEBUG 
        std::cout << "execute func" << std::endl;
    #endif
}

int main()
{
    std::vector<int> v = { 0, 1, 2, 3, 4 };
    printVec(v, 4);

    return 0;
}
