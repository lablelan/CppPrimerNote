#include <iostream>

std::string global_str;
int global_int;

int main()
{
    std::cout << global_str << std::endl;
    std::cout << global_int << std::endl;

    int local_int;
    std::cout << local_int << std::endl;


    return 0;
}
