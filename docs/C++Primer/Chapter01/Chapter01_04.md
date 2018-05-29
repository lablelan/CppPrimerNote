
## 练习 1.9
编写程序，使用while循环将50到100的整数相加。
```c++
include <iostream>

int main()
{
	int a = 50, sum = 0;

	while(a <= 100)
	{
		sum += a;
		++a;
	}
	std::cout << "sum = " << sum << std::endl;

	return 0;
}

```

## 练习 1.10
除了++运算符将运算对象的值增加1之外，还有一个递减运算符(--)实现将值减少1。编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。
```c++
#include<iostream>

int main()
{
	int a = 10;
	while(a > 0)
	{
		std::cout << a << std::endl;
		--a;
	}
	return 0;
}

```

## 练习 1.11
编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
```c++
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

```

## 练习 1.12 
下面的for循环完成了什么功能？
```c++
#include <iostream>

int main()
{
	int sum = 0;	
	for(int i = -100; i <= 100; i++)	
	{
		sum += i;
	}
	
	// sum = 0
	std::cout << sum << std::endl;
	
	return 0;
}

```

## 练习 1.13 
使用for循环重做1.4. 练习1节中的所有。
```c++
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
```

## 练习 1.14 
对比for循环和while循环，两种形式的优缺点各是什么？
```javascript
 for:
 优点：
 1.循环条件中限制循环次数，不容易因为疏忽而出现死循环
 2.语义明确
 3.书写简单
 缺点:
 1.没有do...while的效果
 2.写帧循环/死循环时冗余

 while:
 优点:
 1.有do...while语法
 2.有时候实现统一效果比for更简洁
 缺点：
 1.循环条件不清晰，容易因为疏忽出现死循环
```

## 练习 1.15 
编写程序，包含14页“再探编译”中讨论的常见错误。熟悉编译器生成的错误信息。
```c++
#include <iostream>
#include <string>

int main()
{
	// 语法错误
	//std::cout << "aaaaa" << std::endl: // error: expected ‘;’ before ‘:’ token
	//std::cout << aaa a aaaa << std::endl; // aaa’ was not declared in this scope
	//std::cout << "aaaaaaaaaaa" std::endl; // error: expected ‘;’ before ‘std’
	
	// 类型错误
	//std::string str = 10; // initializing argument 1 of ‘std::basic_string<_CharT, _Traits, _Alloc>::basic_string(const _CharT*, const _Alloc&) [with _CharT = char; _Traits = std::char_traits<char>; _Alloc = std::allocator<char>]’ [-fpermissive]	

	// 声明错误
	int a = 0, b = 0;
	std::cout << c << b << a << std::endl; // error: ‘c’ was not declared in this scope

	return 0; 
}
```

## 练习 1.16
编写程序，从cin读取一组数,输出其和。
```c++
#include <iostream>

int main()
{
	int sum = 0, val = 0;
	while(std::cin >> val)
	{
		sum += val;
	}

	std::cout << sum << std::endl;
	return 0;
}
```

## 练习 1.17
如果输入的所有值都是相等的，本节的程序会输出什么？如果没有重复值，输出又会是怎么样的？
```c++
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

```

## 练习 1.18
编译并运行本节的程序，给它输入全都相等的值。再次运行程序，输入没有重复的值。
```c++
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
```

## 练习 1.19
修改你为1.4.1节练习1.10(第11页)所编写的程序(打印一个范围内的数)，使其能处理用户输入的第一个数比第二个数小的情况。
```c++
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

```