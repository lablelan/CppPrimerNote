
## 练习 1.20
在网站http://www.informit.com/title/0321714113上，第1章的代码目录中包含了头文件Sales_item.h。将它拷贝到你自己的工作目录中。用它编写一个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。
```c++
#include <iostream>
#include "Sales_item.h"

int main()
{

	const static int MAX_LOOP_TIMES = 2;
	Sales_item item[MAX_LOOP_TIMES];

	for (int i = 0; i < MAX_LOOP_TIMES; ++i)
	{
		std::cin >> item[i];	
	}

	for (int i = 0; i < MAX_LOOP_TIMES; ++i)	
		std::cout << item[i] << std::endl;

	return 0;
}

```
## 练习 1.21
编写程序，读取两个ISBN相同的Sales_item对象，输出它们的和。
```c++
#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1;
	Sales_item item2;
	
	std::cin >> item1 >> item2;

	if (item1.isbn() == item2.isbn())
	{
		item1 += item2;
	}
	
	std::cout << item1 << std::endl;

	return 0;
}

```

## 练习 1.22
编写程序，读取多个具有相同ISBN的销售记录，输出所有记录的和。
```c++
#include <iostream>
#include "Sales_item.h"
#include <vector>

int main()
{
	int is_continue = 0;		// 0 stop loop
	
	std::vector<Sales_item> item_vec;

	int count = 0;
	do 
	{
		std::cout << "Enter 1 to enter item info or enter 0 print and quit:";
	
		std::cin >> is_continue;
		
		if (is_continue != 0)
		{
			Sales_item item;
			std::cout << "Enter the " << count + 1 << "book info: (tip:bookno sale_count sale_price):";
			std::cin >> item;
		
			item_vec.push_back(item);
			++count;		
		} 
	}
	while (is_continue != 0);
	
	
	Sales_item ret;						// result

	std::cout << "bookno count price" << std::endl;
	for (int i = 0; i < item_vec.size(); ++i)
	{
		if (ret.isbn() != item_vec[i].isbn())
		{
			ret.reset();
			ret.setBookNo(item_vec[i].isbn());	// only print the same book
		}
		ret = ret + item_vec[i];
		std::cout << "the "<< i + 1 << "book info: " << item_vec[i] << std::endl;		
	}
	std::cout << "the result: " << ret << std::endl;

	return 0;
}

```

## 练习 1.23
编写程序，读取多条销售记录，并统计每个ISBN(每本书)有几条销售记录。
```c++
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
```

## 练习 1.24
输入表示多个ISBN的多条销售记录来测试上一个程序，每个ISBN的记录应该聚在一起。
```c++
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
```
