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
