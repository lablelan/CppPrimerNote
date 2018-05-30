#include <iostream>

int main()
{
	/*
	int a = 2, b = 2;
	std::cout << "The sum of " << a;
		  << " and " << b;
		  << " is " << a * b << std::endl;
	//error: expected primary-expression before ‘<<’ token
	*/

	int a = 2, b = 2;
	std::cout << "The sum of " << a;
	std::cout << " and " << b;
	std::cout << " is " << a * b << std::endl;

	return 0;
}
