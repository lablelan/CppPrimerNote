#include <iostream>

int main()
{
    std::string str = "hello admin, what the X mean?";
    for (auto &c : str)
    {
        c = 'X';
    }

    std::cout << str << std::endl;

    return 0;
}
