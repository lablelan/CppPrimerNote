#include <iostream>
#include "Sales_item.h"
#include <map>


int main()
{
    std::map<std::string, int> count_map;

    int is_loop = 0; 

    
    do
    {
        std::cout << "Enter 1 to enter item info or enter 0 print and quit:";
        std::cin >> is_loop;

        if (is_loop != 0)
        {
            Sales_item item;
            std::cout << "Enter the book info: (tip:bookno sale_count sale_price):";
            std::cin >> item;

            // 查找并统计次数
            auto map_it = count_map.begin();
            for (map_it; map_it != count_map.end(); ++map_it)
            {
                if (map_it->first == item.isbn())
                {
                    map_it->second++;
                    break;
                }
            }
            if (map_it == count_map.end())
            {
                count_map[item.isbn()] = 1;
            }
        }
    }
    while(is_loop != 0);


    for (const auto &map_it : count_map)
    {
        std::cout << "book " << map_it.first << " count: " << map_it.second << std::endl;
    }
}
