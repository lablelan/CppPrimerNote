#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec={ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (decltype(ivec.size()) i = 0; i < ivec.size() - 1; i++)
    {
       std::cout << ivec[i] + ivec[i+1] << std::endl;
    }

    std::cout << "----------------------" << std::endl;

    for (decltype(ivec.size()) i = 0; i < (ivec.size() % 2 != 0 ? ivec.size()/2+1 : ivec.size()/2); i++)
    {
        if (ivec.size()%2 != 0 && i == ivec.size()/2)
        {
            std::cout << "center:" << ivec[i]<< std::endl;
        }
        else
        {
            std::cout << ivec[i] + ivec[ivec.size()-1-i] << std::endl;
        }
    }

    return 0;
}
