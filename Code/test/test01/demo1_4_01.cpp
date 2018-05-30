#include <iostream>

int main()
{
	int sum = 0, a = 1;
	
	while(a <= 10)
	{
		sum = sum + a;
		++a;
	}

	std::cout << "Sum of 1 to 10 inclusive is "
		  << sum << std::endl;
	

	return 0;
}
