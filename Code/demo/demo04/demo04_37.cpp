#include <iostream>

int main()
{
    int i;
    double d;
    const std::string *ps;
    char *pc;
    void *pv;

    pv = const_cast<std::string *>(ps);
    i = static_cast<int>(*pc);
    pv = reinterpret_cast<void *>(&d);
    pc = reinterpret_cast<char *>(pv);

    return 0;
}
