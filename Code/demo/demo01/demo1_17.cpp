#include <iostream>

// 都是相等不会输出，一直等待输入直到遇到文件结束符(end-of-file)或输入流状态为无无效时才输出
// 如果没有重复值会一直输出当前输入的数的数量为1


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
