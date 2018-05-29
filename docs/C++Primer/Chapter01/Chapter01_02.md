
## 练习 1.3
编写程序，在标准输出上打印Hello, World。
```c++
#include <iostream>

int main()
{
	std::cout << "Helllo World" << std::endl;
	return 0;
}
```

## 练习 1.4
我们的程序使用假发运算符+来将两个数相加。编写程序使用乘法运算符*，来法印两个数的积。
```c++
#include <iostream>

int main()
{
	std::cout << "The Sub of " << 2 << " and " << 2 << " is " << 2 * 2 << std::endl;

	return 0;
}
```

## 练习 1.5
我们将所有输出操作放在一条很长的语句中。重写程序，将每个运算对象的打印操作放在一条独立的语句中。
```c++
#include <iostream>

int main()
{
	int a = 0, b = 0;
	a = 2, b = 2;
	std::cout << "The Sub of ";
	std::cout << a;
	std::cout << " and "; 
	std::cout << b; 
	std::cout << " is ";
	std::cout << a*b << std::endl;

	return 0;
}
```

## 练习 1.6
解析下面程序片段是否合法。
```c++
std::cout << "The sum of " << v1;
		  << " and "       << v2;
		  << " is "     << v1 + v2 << std::endl; 
```
如果程序是合法的，它输出什么？如果程序不合法， 原因何在？应该如何修正？

```c++
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
```