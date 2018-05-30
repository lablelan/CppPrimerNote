#include <iostream>

int main()
{
	int a = 0,b = 0, tmp = 0;

	std::cout << "Enter two num: ";
	std::cin >> a >> b;
	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	for (int i = a; i <= b; i++)
	{
		std::cout << i << " ";
	}

	return 0;
}
