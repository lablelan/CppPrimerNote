#include <iostream>

std::string make_plural(size_t ctr, const std::string &word = "s", const std::string &ending = "")
{

    return (ctr > 1) ? word + ending : word;
}

int main()
{
    std::cout << make_plural(0, "success") << std::endl;
    std::cout << make_plural(2, "failure") << std::endl;

    return 0;
}
