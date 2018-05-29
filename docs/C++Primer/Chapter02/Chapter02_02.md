
## 练习 2.9
解释下列定义的含义。对于非法的定义，请说明错误在何处并将其改正。
```javascrpt
(a) std::cin >> int input_value;
(b) int i = { 3.14 };
(c) double salary = wage = 9999.99;
(d) int i = 3.14;
```
```c++
#include <iostream>

int main()
{
    //std::cin >> int input_value;
    // error: expected primary-expression before ‘int’
    
    int i = { 3.14 };
    // 没警告，丢失精度
    
    //double salary = wage = 9999.99;
    // 错误，double不支持连=操作，如果需要连=操作需要在类中重载=号操作符

    int j = 3.14;
    // 没警告，丢失精度
    

    return 0;
}
```

## 练习 2.10
下列变量初始值分别是什么
```c++
#include <iostream>

std::string global_str;
int global_int;

int main()
{
    std::cout << global_str << std::endl;
    std::cout << global_int << std::endl;

    int local_int;
    std::cout << local_int << std::endl;


    return 0;
}
```

## 练习 2.11
指出下面的语句是声明还是定义
```javascript
(a) extern int ix = 1024;
(b) int iy;
(c) extern int iz;
```
```c++
#include <iostream>

extern int ix = 1024;       // 定义 编译器会警告
extern int iz;              // 声明

int main()
{
    //extern int ix = 1024;     // 函数内会报错
    std::cout << ix << std::endl;
    int iy;                     // 定义
    std::cout << iy << std::endl;
    //extern int iz;            // 函数内会报错
    std::cout << iz << std::endl;

    return 0;
}
```

## 练习 2.12
请指出下面的名字中哪些是非法的？
```javascript
(a) int double = 3.14;
(b) int _;
(c) int catch-22;
(d) int 1_or_2 = 1;
(e) double Double = 3.14;
```

```c++
#include <iostream>

int main()
{
    //int double = 3.14;          // 使用了关键字
    //int _;                      // 使用了符号前缀
    //int catch-22;               // 使用了关键字
    //int 1_or_2 = 1;             // 使用了数字前缀
    double Double = 3.14;        //

    return 0;
}
```

## 练习 2.13
下面程序中j的值是多少？
```c++
#include <iostream>

// 在没有指定域,默认使用块内的局部变量 

int i = 42;

int main()
{
    int i = 100;
    int j = i;

    std::cout << j << std::endl;

    j = ::i;
    std::cout << j << std::endl;

    return 0;
}
```

## 练习 2.14
下面的程序合法吗？如果合法，它将输出什么？
```c++
#include <iostream>

// for 循环内i是for循环的局部变量

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
    {
        sum += i;
    }

    std::cout << i << " " << sum << std::endl;
    return 0;
}

```