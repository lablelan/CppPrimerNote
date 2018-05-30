#include <iostream>

// 当我们使用一个istream对象作为条件时，其效果是检测流的状态，
// 如果流是有效的，即流未遇到错误，那么检测成功。
// 当遇到文件结束符，或遇到一个无效的输入时（例如读入的值不是一个整数），
// istream对象的状态就会变为无效。
// 处于无效状态的istream对象会使条件变为假
int main()
{
	int sum = 0, value = 0;
	
	while(std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is " << sum << std::endl;

	return 0;
}
