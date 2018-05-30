#include <iostream>
#include "Sales_item.h"

// total记录同一种书的总信息
// trans记录当前输入书的信息
// 如果输入了一种新的书，total就记录新的书的总信息

int main()
{
    Sales_item total;

    if (std::cin >> total)
    {
        Sales_item trans;

        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans;
            }
            else 
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cout << "No data??" <<std::endl;
        return -1;
    }

    return 0;
}
