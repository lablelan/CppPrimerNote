## 练习 4.34
根据本节给出的变量定义，说明在下面的表达式中将发生什么样的类型转换：
```c++
(a) if (fval)
(b) dval = fval + ival;
(c) dval + ival * cval;
```
需要注意每种运算符遵循的是左结合律还是右结合律。

## 练习 4.35
假设有如下的定义，
```c++
char cval;
int ival;
unsigned int ui;
float fval;
double dval;
```
请回答下面的表达式中发生了隐式类型转换吗？如果有，指出来。
```c++
(a) cval = 'a' + 3;
(b) fval = ui - ival * 1.0;
(c) dval = ui * fval;
(d) cval = ival + fval + dval;
```


