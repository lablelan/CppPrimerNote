
## 练习 1.7
编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息。
```c++

int main()
{
	/*
 	 *
	 */*
	 **/
	 *
	/* 
	return 0;
}
```
错误信息：
```javascript
demo1_07.cpp:9:2: error: unterminated comment
  /* 
  ^
demo1_07.cpp: In function ‘int main()’:
demo1_07.cpp:7:5: error: expected primary-expression before ‘/’ token
   **/
     ^
demo1_07.cpp:8:3: error: expected primary-expression at end of input
   *
   ^
demo1_07.cpp:8:3: error: expected ‘;’ at end of input
demo1_07.cpp:8:3: error: expected ‘}’ at end of input
```

## 练习 1.8
指出下列哪些输出语句是合法的（如果有的话）：
```c++
std::cout << "/*";
std::cout << "*/";
std::cout << "/* "*/" */";
std::cout << "/* "*/" /* "/*" */";
```
预测编译这些语句或产生什么样的结果，实际编译这些语句来验证你的答案（编写一个小程序，每次将上述语句作为其主体），改正每个编译错误。
```c++
#include <iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */;
	std::cout << /* "*/" /* "/*" */;
	
	return 0;
}

```
错误信息
```javascript
demo1_08.cpp:7:21: warning: missing terminating " character [enabled by default]
  std::cout << /* "*/" */;
                     ^
demo1_08.cpp:7:2: error: missing terminating " character
  std::cout << /* "*/" */;
  ^

```