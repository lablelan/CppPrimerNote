#include <iostream>
#include <vector>

int main()
{
    int grade = 70;
    std::cout << ((grade > 90) ? "high pass" : ((grade < 60) ? "fail" : ((grade < 75) ? "low pass" : "pass"))) << std::endl;

    if (grade > 90)
    {
        std::cout << "high pass" << std::endl;
    }
    else if (grade < 60)
    {
        std::cout << "fail" << std::endl;
    }
    else if (grade >= 60 && grade < 75)
    {
        std::cout << "low pass" << std::endl;
    }
    else 
    {
        std::cout << "pass" << std::endl;
    }

    return 0;
}
