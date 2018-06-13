#include <iostream>

int main(int argc, char **argv)
{
    std::string s;
    s = s + argv[1];
    s = s + argv[2];

    std::cout << s << std::endl;

    return 0;
}
