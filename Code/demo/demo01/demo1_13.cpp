#include <iostream>

int main()
{
	// 1.9
	std::cout << "for demo 1.9" << std::endl;
	int sum = 0;
	for (int i = 50; i <= 100; ++i)
	{
		sum += i;
	}	
	std::cout << sum << std::endl;

	// 1.10
	std::cout << "for demo 1.10" << std::endl;
	for (int i = 10; i > 0; --i)
	{
		std::cout << i << std::endl;
	}	

	// 1.11	
	std::cout << "for demo 1.11" << std::endl;
	int a = 0, b = 0;
	std::cin >> a >> b;
	if(a > b)
	{
		std::cout << "a can't greater than b" << std::endl;
	}
	for (a; a <= b; a++)
	{
		std::cout << a << std::endl;
	}

	return 0;
}
