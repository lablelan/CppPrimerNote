
## 练习 2.15
下面的哪个定义是不合法的？为什么？
```javascript
(a) int ival = 1.01;
(b) int &rval1 = 1.01;
(c) int &rval2 = ival;
(d) int &rval3;
```
```c++
#include <iostream>

// a：合法，丢失精度
// b：不合法，引用必须初始化
// c：合法
// d：不合法，引用必须初始化

int main()
{
    int ival = 1.01;
    //int &rval1 = 1.01;
    int &rval2 = ival;
    //int &rval3;

    return 0;
}
```

## 练习 2.16
考查下面的所有赋值然后回答：哪些赋值是不合法的？为什么？哪些赋值是合法的？它们执行了什么样的操作？
```javascript
int i = 0, &r1 = i;    doubled = 0, &r2 = d;
(a) r2 = 3.14159;
(b) r2 = r1;
(c) i = r2;
(d) r1 = d;
```
```c++
#include <iostream>

// a：合法，引用是一个别名
// b：合法，相当于一个变量赋值给一个别名
// c：合法，别名给变量赋值相当于变量赋值给变量
// d：合法，相当于将r1别名改成d的别名

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;
    r2 = r1;
    i = r2;
    r1 = d;

    return 0;
}
```

## 练习 2.17
执行下面的代码段将输出什么结果？
```javascript
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```
```c++
#include <iostream>

// 都输出10

int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;

    std::cout << i << " " << ri << std::endl;

    return 0;
}
```

## 练习 2.18
编写代码分别更改指针的值及指针所指向对象的值。
```c++
#include <iostream>

int main()
{
    int *a = nullptr;
    int b = 10;
    a = &b;
    std::cout << *a << std::endl;
    *a = 11;
    std::cout << b << std::endl;

    return 0;
}
```

## 练习 2.19
说明指针和引用的主要区别。
```javascript
1.指针：存放地址的变量，占用内存空间
     指针可以不初始化

2.引用：变量的别名，不占用内存空间
     引用必须在定义时初始化
```


## 练习 2.20
请叙述下面这段代码的作用
```c++
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
```
```c++
#include <iostream>

// 改变值i为i的平方

int main()
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << i << '\n';

    return 0;
}

```

## 练习 2.21
请解释下述定义。在这些定义中有非法吗？如果有，为什么？
```javascript
int i = 0;
(a) double* dp = &i;
(b) int *ip =i;
(c) int *p = &i;
```
```c++
#include <iostream>

int main()
{
    int i = 0;
    double *dp = &i;    // 不能直接将int类型指针赋值给double类型指针
    int *p = &i;
    int *ip = i;        // 不能直接将整形0转成指针

    return 0;
}
```

## 练习 2.22
假设p是一个int型指针，请说明下述代码的含义
```c++
if (p)    // p指向的地址不为NULL时执行代码块
if (*p)   // p指向的地址内容大于0执行代码块
```

## 练习 2.24
在下面这段代码中为什么p合法而lp非法？
```javascript
int i = 42;
void *p = &i;
long *lp = &i;
```
```javascript
因为泛型指针void *并没有步长，任意类型都可以强转为泛型指针，而long *在不同操作系统的步长不一样，如果强转可能会访问到非法内存。
```

## 练习 2.25
说明下课变量的类型和值。
```javascript
(a) int* ip,i, &r = i;
(b) int i, *ip = 0;
(c) int* ip, ip2;
```
```c++
#include <iostream>

int main()
{
    //int* ip,i,&r = i;  // ip--int* i--int* r--(int*)& 
    //std::cout << "ip:" << ip << " i:" << i << " r:"<< r << std::endl;

    //int i, *ip = 0;    // i--int ip--int*
    //std::cout << "i:" << i << " ip:" << ip << std::endl;

    int* ip, ip2;      // ip--int* ip2--int*
    std::cout << "ip" << ip << " ip2:" << ip2 << std::endl;

    return 0;
}
```