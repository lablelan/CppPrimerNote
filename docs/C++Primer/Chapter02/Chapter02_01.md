
## 练习 2.1
类型int、long、long long和short的区别是什么？无符号类型和带符号类型的区别是什么？float和double的区别是什么？
```javascript
 字节不同和占用空间不同(以一般为例): int:4字节 32位，long:4字节 32位, long long:8字节 64位, short:2字节 16位
 无符号类型只能是正整，符号位也被用于表示实际数值
 有符号类型符号位不用于表示实际数值
```
## 练习 2.2
计算按揭贷款时，对利率、本金和付款粉笔应选择何种数据类型？说明你的理由。
```c++
 利率：float 单精度足够，不会丢失数据
 本金：double 设计用户金额应该用更精确的数据类型
 付款：double 付款也应该对数据精确度要求较高
```

## 练习 2.3
读程序写结果
```c++
unsigned u =10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```
结果
```javascript
 u2 - u = 21
 u - u2 = 4294967264
 
 i2 - i = 32
 i - i2 = -32
 i - u = 0
 u - i = 0
```

## 练习 2.4
编写程序检查你的估计是否正确，如果不正确，清仔细读本节知道弄明白问题所在。

## 练习 2.5
指出下述字面值的数据类型并说明每一组内几种字面值的区别
```javascript
(a) 'a', L'a', "a", L"a"
(b) 10, 10u, 10L, 10uL, 012, 0xC
(c) 3.14, 3.14f, 3.14L
(d)10, 10u, 10., 10e-2
```
```c++
#include <iostream>

int main()
{
    std::cout << 'a' << std::endl;
    std::cout << L'a' << std::endl;
    std::cout << "a" << std::endl;
    std::cout << L"a" << std::endl;

    std::cout << std::endl;
    std::cout << 10 << std::endl;
    std::cout << 10u << std::endl;
    std::cout << 10L << std::endl;
    std::cout << 10uL << std::endl;
    std::cout << 012 << std::endl;
    std::cout << 0xC << std::endl;
    std::cout << std::endl;

    std::cout << 3.14 << std::endl;
    std::cout << 3.14f << std::endl;
    std::cout << 3.14L << std::endl;
    std::cout << std::endl;

    std::cout << 10 << std::endl;
    std::cout << 10u << std::endl;
    std::cout << 10. << std::endl;
    std::cout << 103-2 << std::endl;

    return 0;
}

```

## 练习 2.6
下面两组定义是否有区别，如果有，请叙述之
```c++
int month = 9, day = 7;
int month = 09, day = 07;
```
```c++
#include <iostream>

int main()
{
    int month1 = 9, day1 = 7;                               // 默认是十进制

    int month2 = 09, day2 = 07;                             // 0表示八进制，如果是09的话编译不过

    std::cout << month1 << " " << day1 << std::endl;
    std::cout << month2 << " " << day2 << std::endl;  
    // 编译不过：invalid digit "9" in octal constant，八进制最大值是每位的7

    std::cout << 0e0 << std::endl;
    
    return 0;
}
```

## 练习 2.7
```javascript
(a) "Who goes with F\145rgus?\012"
(b) 3.14e1L
(c) 1024f
(d) 3.14L
```
```c++
#include <iostream>

int main()
{
    float a = 1024f;                                          //error:invalid suffix "f" on integer constant
    //float a = 1024.0f;                                      // 不能使用1024f，必须使用1024.0f表示浮点数，
    std::cout << "a:" << "Who gose with F\145rgus?\012";
    std::cout << "b:" << 3.14e1L << std::endl;
    std::cout << "c:" << a << std::endl;
    std::cout << "d:" << 3.14L << std::endl;

    return 0;
}
```

## 练习 2.8
请利用转义序列编写一段程序，要求先输出2M，然后转到新一行。修改程序使其先输出2，然后输出制表符，再输出M，最后转到新一行。
```c++
#include <iostream>

int main()
{
    std::cout << "2M" << std::endl;
    std::cout << '2' << "\t" << L'M' << "\t" << 'M' << std::endl;

    return 0;
}
```