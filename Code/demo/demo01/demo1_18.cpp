#include <iostream>

// 输入： 1 1 1 1 1 1 1 e 	输出： 1 count is :7
// 输入： 1 2 3 e 		输出： 1 count is :1    2 count is :1    3 count is :1

int main()
{
	int curVal = 0, val = 0, count = 0;

	if (std::cin >> curVal)
	{
		count = 1;
		while (std::cin >> val)
		{
			if (curVal == val)
			{
				++count;
			}
			else
			{
				count = 1;
				std::cout <<curVal << " count is :" << count << std::endl;
				
				curVal = val;
			}
		}
	}	
	std::cout <<curVal << " count is :" << count << std::endl;

	return 0;
}
