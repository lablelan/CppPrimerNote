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
