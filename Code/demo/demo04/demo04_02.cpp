#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec={ 1, 2 };

    std::cout << *vec.begin() << std::endl;
    std::cout << *(vec.begin()) << std::endl;

    std::cout << *vec.begin() + 1 << std::endl;
    std::cout << *(vec.begin()) + 1 << std::endl;

    return 0;
}
