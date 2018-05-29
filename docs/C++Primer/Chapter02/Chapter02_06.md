
## 练习 2.39
编译下面的程序观察其运行结果，注意，如果忘记写类定义体后面的分号会发生什么情况？记录下相关信息，以后可能会有用。
```javascript
#include <iostream>

struct Foo { /* 此处为空  */ }    // 注意没有分号

int main()
{
    return 0;
}

```
编译报错：demo2_39.cpp:3:34: error: expected ‘;’ after struct definition

## 练习 2.40
根据自己的理解写出Sales_data类，最好与书中的例子有所区别。
```c++
#include <iostream>

struct Sales_data
{
    double price = 0;
    int discount = 0;
};

int main()
{
    return 0;
}
```

## 练习 2.41
使用你自己的Sales_data类重写1.5.1节(第20页)、1.5.2节(第21页)和1.6节(第22页)的练习。眼下先把Sales_data类的定义和main函数放在同一个文件里。
```c++

```