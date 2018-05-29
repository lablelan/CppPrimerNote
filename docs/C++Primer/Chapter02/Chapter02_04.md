
## 练习 2.26
下面哪些句子是合法的？如果不合法的句子，请说明为什么？
```javascript
(a) const int bug;
(b) int cnt;
(c) const int sz = cnt;
(d) ++cnt; ++sz;
```
```c++
#include <iostream>

int main()
{
    const int buf;      // 不合法，buf必须有初值 
    int cnt = 0;
    const int sz = cnt;
    ++cnt;              // 合法，cnt是一个变量
    ++sz;               // 不合法，sz是一个常量

    return 0;
}
```

## 练习 2.27
下面的哪些初始化是合法的？请说明原因。
```javascript
(a) int i = -1, &r = 0;
(b) int *const p2 = &i2;
(c) const int i = -1, &r = 0;
(d) const int *const p3 = &i2;
(e) const int p1 = &i2;
(f) const int &const r2;
(g) const int i2 = i, &r = i;
```
```c++
#include <iostream>

int main()
{
    //int i = -1, &r = 0;                       // （a）不合法，引用必须是可以被改变的变量的别名
    //int i2 = 10; int *const p2 = &i2;         // （b）合法
    //const int i = -1, &r = 0; r = 1;          // （c）合法?定义引用就是为了改变其值，但这里没有报错
    //int i2 = 10; const int *const p3 = &i2;   // （d）合法
    //int i2 = 10; const int *p1 = &i2;         // （e）合法
    //const int &const r2;                      // （f）不合法，引用必须初始
    //int i = 10; const int i2 = i, &r = i;     // （g）合法

    return 0;
}
```

## 练习 2.28
说明下面的这些定义是什么意思，跳出其中不合法的。
```javascript
(a) int i, *const cp;
(b) int *p1, *const p2;
(c) const int ic, &r = ic;
(d) const int *const p3;
(e) const int *p;
```
```c++
#include <iostream>

int main()
{
    //int i, *const cp;       // （a）不合法，int *const 类型必须初始化一个地址
    //int *p1, *const p2;     // （b）不合法，int *const 类型必须初始化一个地址
    //const int ic, &r = ic;       // （c）不合法，const int 必须初始化
    //const int *const p3;       //（d）不合法，*const必须初始化
    const int *p;               //（e）合法

    return 0;
}

```

## 练习 2.29
假设有上一个练习中定义的哪些变量，则下面的哪些语句是合法的？请说明原因
```javascript
(a) i = ic;
(b) p1 = p3;
(c) p1 = &ic;
(d) p3 = &ic;
(e) p2 = p1;
(f) ic = *p3
```
```c++
#include <iostream>

int main()
{
    int i;
    const int ic = 10;
    i = ic;                   // (a)合法

    int *p1;
    const int *const p3 = p1;
    //p1 = p3;                // (b)不合法，类型不一致，const int* 不能直接给int*
    //p1 = &ic;               // (c)不合法，类型不一致，const int 类型并不能被int *类型改变
    //p3 = &ic;               // (d)不合法，类型不一致
    int *const p2 = p1;
    p2 = p1;                   // (e)不合法，*const 不能改变指针指向
    ic = *p3;                  // (f)不合法，常量初始化后不能被改变


    return 0;
}
```

## 练习 2.30
对下面的这些语句，请说明对象被声明成了顶层const还是底层const？
```javascript
const int v2 = 0;
int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```
```javascript
 对于下面的这些语句，清说明对象被声明成了顶层const还是底层const?
 const int v2 = 0;                                
 int v1 = v2;                                     
 int *p1 = &v1, &r1 = v1;                         
 const int *p2 = &v2, *const p3 = &i, &r2 = v2;   // p2顶层，p3顶层底层，r2顶层
```

## 练习 2.31
假设已有上一个练习中所做的那些声明，则下面的哪些语句是合法的？请说明顶层const和底层const在每个例子中有何体现？
```javascript
r1 = v2;
p1 = p2;
p2 = p1;
p1 = p3;
p2 = p3;
```
```c++
#include <iostream>

/*
 * 假设已有上一个练习中所做的那些声明，则下面的那些语句是合法的？
 * 清说明顶层const和底层const在每个例子中有何体现
 *
 * r1 = v2;    // 合法 
 * p1 = p2;    // 不合法，p2是底层const,p1是整型指针类型不匹配
 * p2 = p1;    // 合法，p2是底层const，可以改变指向
 * p1 = p3;    // 不合法，类型不匹配；p3即是顶层const也是底层const，底层const不能改变指向的内存的值;p1是一个指针变量,可以通过p1改变指向内存的值
 * p2 = p3;    // 合法，p2是底层const，可以改变指向
 *
 */

int main()
{
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    int i = 1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;

    // test
    r1 = v2;
    //p1 = p2;
    p2 = p1;
    //p1 = p3;
    p2 = p3;

    return 0;
}
```

## 练习 2.32
下面代码是否合法？如果非法，请设法将其修改正确
```c++
int null = 0, *p = null;
```
修改后
```c++
#include <iostream>

constexpr int null = 0;

int main()
{
    //int null = 0, *p = (int *)null;// 将null强转成地址
    //int null = 0, *p = &null;      // 取null地址

    const int *p = &null;

    return 0;
}
```