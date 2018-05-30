#include <iostream>

int main()
{
	std::cout << "Enter two num" << std::endl;
	int a = 0, b = 0;

	std::cin >> a >> b;
	
	if(a > b)
	{
		return -1;
	}

	while(a <= b)
	{	
		std::cout << a << std::endl;
		a++;
	}

	return 0;
}
