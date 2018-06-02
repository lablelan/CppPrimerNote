## 练习 3.24
请使用迭代器重做3.3.3节(第94页)的最后一个练习。
```c++

```

## 练习 3.25
3.3.3节(第93页)划分分数段的程序是使用下标运算符实现的，请利用迭代器改写该程序并实现完全相同的功能。
```c++
```


## 练习 3.26
在100页的二分搜索程序中，为什么用的是mid = beg + (end - beg) / 2, 而非mdi = (beg + end) / 2;？ 
```c++

```

## 练习 3.27
假设txt_size是一个无参数的函数，它的返回值是int。请回答下列哪个定义是非法的？为什么？
```javascript
unsigned buf_size =1024;
(a)int ia[buf_size];
(b)int ia[4*7-14]
(c)int ia[txt_size()]
(d)char st[11] = "fundamental";
```

```c++

```

## 练习 3.28
下列数组中元素的值是什么？
```c++
string sa[10];
int ia[10];
int main() {
	string sa2[10];
	int    ia2[10];
}
```

## 练习 3.29
相比于vector来说，数组有那些缺点，请列举一些。
```c++

```

## 练习 3.30
指出下面代码的索引错误
```c++
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
	ia[ix] = ix;
```

## 练习 3.31
编写一段程序，定义一个含有10个int的数组，令每个元素的值就是其下标值。
```c++

```

## 练习 3.32
将上一题刚刚创建的数组拷贝给另外一个数组。利用vector重写程序，实现类似的功能。
```c++

```

## 练习 3.33
对于104页的程序来说，如果不初始化scores将发生什么？
```c++

```

## 练习 3.34
假定p1和p2指向同一个数组中的元素，则下面程序的功能是什么？什么情况下改程序非法？
```c++

```

## 练习 3.35
编写一段程序，利用指针将数组中的元素直为0.
```c++

```

## 练习 3.36
编写一段程序，比较两个数组是否相等。再写一段程序，比较两个vector对象是否相等。
```c++

```

## C风格字符串的函数
| Name | Descriptions |
| - | -: |
| strlen(p) | 返回p的长度，空字符串不计算在内 |
| strcmp(p1, p2) | 比较p1和p2的相等性。如果p1==p2，返回0；如果p1>p2，返回一个正值；如果p1<p2，返回一个负值 |
| strcat(p1, p2) | 将p2附加到p1之后，返回p1 |
| strcpy(p1, p2) | 将p2拷贝给p1，返回p1 |


## 练习 3.37
下面的程序是何含义，程序的输出结果是什么？
```c++

```
## 练习 3.38
在本节中我们提到，将两个指针相加不但是非法的，而且也是没什么意义。请问为什么两个指针相加没什么意义？
```c++

```
## 练习 3.39
编写一段程序，比较两个sring对象。再编写一段程序比较两个C风格字符串的内容。
```c++
#include <iostream>
#include <cstring>

int main()
{
    std::string s1 = "hello", s2 = "hell";
    if (s1 == s2)
    {
        std::cout << "s1 == s2" << std::endl;
    }
    else if(s1 > s2)
    {
        std::cout << "s1 > s2" << std::endl;
    }
    else
    {
        std::cout << "s1 < s2" << std::endl;
    }
    
    char cs1[1024] = "hell";
    char cs2[1024] = "hello";

    if (strcmp(cs1, cs2) == 0)
    {
        std::cout << "cs1 == cs2" << std::endl;
    }
    else if(strcmp(cs1, cs2) > 0)
    {
        std::cout << "cs1 > cs2" << std::endl;
    }
    else 
    {
        std::cout << "cs1 < cs2" << std::endl;
    }

    return 0;
}

```

## 练习 3.40
编写一段程序，定义两个字符数组并用字符串字面值初始化它们；接着再定义一个字符数组存放前两个数组连接后的结果。使用strcpy和strcat把前；两个数组的内容拷贝到第三个数组中。
```c++
#include <iostream>
#include <cstring>

int main()
{
    char s1[] = { 'h', 'e', 'l', 'l', 'o', ' ' };
    char s2[] = { 'w', 'o', 'r', 'l', 'd' };

    const int length = strlen(s1) + strlen(s2);
    char s[length + 1];
    memset(s, 0, sizeof(s));

    strcpy(s, s1);
    std::cout << s << std::endl;
    
    strcat(s, s2);
    std::cout << s << std::endl;

    return 0;
}

```

## 练习 3.41
编写一段程序，用整型数组初始化一个vector对象。
```c++
#include <iostream>
#include <vector>

int main()
{
    int arr[4] = { 1, 2, 4, 5 };

    std::vector<int> iv(std::begin(arr), std::end(arr));
    for (auto i : iv)
    {
        std::cout << i << std::endl;
    }


    return 0;
}

```

## 练习 3.42
编写一段程序，将含有整数元素的vector对象拷贝给一个整型数组。
```c++
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iv = { 0, 2, 4 };
    int arr[iv.size()];

    for (decltype(iv.size()) i = 0; i < iv.size(); ++i)
    {
        arr[i] = iv[i];
    }

    for (auto i : arr)
    {
        std::cout << i << std::endl;
    }

    return 0;
}

```

## 练习 3.43
编写3个不同版本的程序，令其均输出ia的元素。版本1使用范围for语句管理迭代过程；版本2和版本3都使用普通for语句，其中版本2要求用下标运算符，版本3要求用指针。此外在所有3个版本的程序中都要直接写出数据类型，而不能使用类型别名、auto关键字或decltype关键字。
```c++
#include <iostream>
#include <vector>

using int_array = int[4];           // 等价于int(&p)[4]; 其中()不能省略

int main()
{
    int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11 };
    // 版本1 范围for循环
    for (int (&i)[4] : ia)
    {   
        for (int &a : i)
        {
            std::cout << a << std::endl; 
        }
    }
    // 版本2 下标运算符循环
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << ia[i][j] << std::endl;
        }
    }
    // 版本3 下标运算符循环(指针)
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << *(*(ia + i) + j) << std::endl;
        }
    }

    return 0;
}

```

## 练习 3.44
改写上一个练习的程序，使用类型悲鸣来代替循环控制变量的类型。
```c++
#include <iostream>
#include <vector>

// int(int_array)[4];
//using int_array = int[4];
typedef int int_array[4];

int main()
{
    int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11 };
    // 版本1 范围for循环
    for (int_array &i : ia)
    {   
        for (int &a : i)
        {
            std::cout << a << std::endl; 
        }
    }
    // 版本2 下标运算符循环
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << ia[i][j] << std::endl;
        }
    }
    // 版本3 下标运算符循环(指针)
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << *(*(ia + i) + j) << std::endl;
        }
    }

    return 0;
}

```

## 练习 3.45
再一次改写程序，这次使用auto关键字。
```c++
#include <iostream>
#include <vector>

int main()
{
    int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11 };
    // 版本1 范围for循环
    for (auto &i : ia)
    {   
        for (auto &a : i)
        {
            std::cout << a << std::endl; 
        }
    }
    // 版本2 下标运算符循环
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
        {
            std::cout << ia[i][j] << std::endl;
        }
    }
    // 版本3 用指针循环
    for (auto i = std::begin(ia); i != std::end(ia); ++i)
    {
        for (auto j = std::begin(*i); j != std::end(*i); ++j)
        {
            std::cout << *j << std::endl;
        }
    }

    return 0;
}

```



