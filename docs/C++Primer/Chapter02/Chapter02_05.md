
## 练习 2.33
利用本节定义的变量，判断下列语句的运行结果。
```javascript
a = 42;
b = 42;
c = 42;
d = 42;
e = 42;
g = 42;
```
```c++
#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    // demo
    a = 42;     // 合法
    b = 42;     // 合法，b是一个整型
    c = 42;     // 合法，c是一个整型
    //d = 42;     // 不合法，d是int *类型，42不是int *类型
    //e = 42;     // 不合法，&ci是底层const, e是int *const类型
    g = 42;     // 不合法，g是const int&

    return 0;
}
```

## 练习 2.34
基于上一个练习中的变量和语句编写一段程序，输出赋值前后变量的内容，你刚才的推断正确吗？如果不对，请反复研读本节的示例知道你弄明白错在何处为止。

## 练习 2.35
```javascript
const int i = i;
const auto &k = i;
auto *p = &i;
const auto j2 = i, &k2 = i;
```
```c++
#include <iostream>

// 定义时const在auto之前，变量就是顶层const
// 指向const修饰的变量时，auto推导的类型是底层const

int main()
{
    const int i = 42;
    
    auto j = i;          // j是int类型
    const auto &k = i;   // k是const int const&类型
    auto *p = &i;        // p是int const *类型
    const auto j2 = i, &k2 = i; // j2是const int类型， k2是const int const&类型

    // 检测
    j = 1;      // pass
    //k = 1;    // err
    int a = 1;
    p = &a;     // pass
    //j2 = 1;   // err
    //k2 = 1;   // err

    return 0;
}
```

## 练习 2.36
关于下面的代码，请指出每一个变量的类型以及程序结束时它们各自的值。
```javascript
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```
```c++
#include <iostream>

// decltype使用一个不加括号的变量，那么结果就是该变量的类型
// decltype使用加括号的变量，编译器会把他当成一个表达式，变量是一种可以作为赋值语句的特殊表达式，所以得到引用类型。

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;    // c是整型
    decltype((b)) d = a;  // d是int &
    ++c;// c == 4
    std::cout << "a = " << a << " c = " << c << std::endl;
    ++d;// d == 4
    std::cout << "a = "<< a << " b = " << b << " d = " << d << std::endl;


    return 0;
}
```

## 练习 2.37
赋值是会产生引用的一类典型表达式，引用的类型就是左值的类型。也就是说，如果i是int，则表达式i=x的类型是int&。根据这一特点，请指出下面的代码中每一个变量的类型和值。
```javascript
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
```
```c++
#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((a = b)) d = a;

    // c是整型，d是整型引用
    std::cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;

    return 0;
}
```

练习 2.38
说明由decltype指定类型和由auto指定类型有何区别。请举出一个例子，declype指定的类型与auto指定的类型一样；再举一个例子，decltype指定的类型与auto指定的类型不一样。

区别：

 1.auto会忽略顶层const

 2.auto推导时，如果是引用类型会推导成引用指向的变量类型

 3.decltype不会忽略const

 4.decltype推导引用类型时保持引用类型

 5.decltype推导时，如果是表达式都推导成引用类型

```c++
#include <iostream>

int main()
{
    int a = 10;
    
    // 类型一样
    auto i = a;
    decltype(a) b = a;

    // 类型不一样
    const int c = 10;
    auto k = c;
    decltype(c) j = c;
    k = 111;
    j = 111;


    return 0;
}
```
