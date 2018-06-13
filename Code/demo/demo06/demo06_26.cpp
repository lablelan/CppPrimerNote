#include <iostream>

// ./demo06_26 prog -d -o ofile data0 0

int main(int argc, char **argv)
{
    std::string s;
    for (int i = 1; i<argc; ++i)
    {
        s = s + argv[i];
        s = s + " ";
    }

    std::cout << s << std::endl;

    return 0;
}
