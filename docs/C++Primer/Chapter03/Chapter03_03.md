## 初始化vector对象的方法
| Name | Descriptions |
| - | -: |
| vector<T> v1 | v1是一个空vector，他潜在的元素是T类型的，执行默认初始化 |
| vector<T> v2(v1) | v2中包含有v1所有元素的副本 |
| vector<T> v2 = v1 | 等价于v2(v1)，v2中包含v1所有元素的副本 |
| vector<T> v3(n, val) | v3包含了n个重复的元素，每个元素的值都是val |
| vector<T> v4(n) | v4包含了n个重复执行了值初始化的对象 |
| vector<T> v5{a,b,c...} | v5包含了初始值个数的元素，每个元素被赋予相应的初始值 |
| vector<T> v5={a,b,c...} | 等价与v5{a,b,c...} |

## 练习 3.12
下列vector对象的定义有不正确的吗？如果有，请指出来。对于正确的，描述其执行结果，对于不正确的，说明其错误的原因。
```javascript
(a)vector<vector<int>> ivec;
(b)vector<string> svec = ivec;
(c)vector<string> svec(10, "null");
```
```c++
#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> ivec;       // 正确，得到一个存放vector<int>类型的ivec
    //std::vector<std::string> svec = ivec;          // 错误，类型不一致
    std::vector<std::string> svec(10, "null");// 正确，得到一个存放10个null字符串的svec

    return 0;
}
```

## 练习 3.13
下列的vector对象各包含多少个元素？这些元素的值分别是多少？
```javascript
(a)vector<int> v1;
(b)vector<int> v2(10);
(c)vector<int> v3(10, 42);
(d)vector<int> v4{10};
(e)vector<int> v5{10, 42};
(f)vector<string> v6{10};
(g)vector<string> v7{10, "hi"};
```
```c++
/*
 * a.0个
 * b.10个初始化为0整数
 * c.10个初始化为42的整数
 * d.1个初始化为10的整数
 * e.2个分别初始化为10和42
 * f.10个初始化为空字符串
 * g.10个初始化为hi字符串
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> v7{10, "hi"};
    std::cout << v7.size() << std::endl;
    for (auto s : v7)
    {
        std::cout << s << std::endl;
    }

    return 0;
}

```

## 练习 3.14
编写一段程序，用cin读入一组整数并把它们存入一个vector对象。
```c++
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    for (int i = 0; i < 3; i++)
    {
        int input = 0;
        std::cin >> input;
        ivec.push_back(input);
    }

    for (auto a : ivec)
    {
        std::cout << a << std::endl;
    }

    return 0;
}

```

## 练习 3.15
改写上题的程序，不过这次读入的是字符串。
```c++
#include <iostream>
#include <vector>

int main()
{
    std::string s;
    std::vector<std::string> svec;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> s;
        svec.push_back(s);
    }

    for (auto str : svec)
    {
        std::cout << str << std::endl;
    }

    return 0;
}

```

## 其他vector操作
| Name | Descriptions |
| - | -: |
| v.empty() | 如果v不含有任何元素，返回真；否则返回假 |
| v.size() | 返回v中元素的个数 |
| v.push_back(t) | 向v的尾端添加一个值为t的元素 |
| v[n] | 返回v中第n个位置上元素的引用 |
| v1 = v2 | 用v2中元素的拷贝替换v1中的元素 |
| v1 = {a,b,c...} | 用列表中元素的拷贝替换v1的元素 |
| v1 == v2 | v1和v2相等当且仅当它们元素数量相同且对应位置的元素值都相同 |
| v1 != v2 | 对v1 == v2取反 |
| <, <=, >, >= | 顾名思义，以字典顺序进行比较 |

## 练习 3.16
编写一段程序，把练习3.13中vector对象的容量和具体内容输出出来。检验你之前的回答是否正确，如果不对，回头重新学习3.3.1节(第87页)直到弄明白在何处为止。
```c++
#include <iostream>
#include <vector>

void printIntVector(std::vector<int> v)
{
    std::cout << "size: " << v.size() << std::endl;
    for (auto i : v)
    {
        std::cout << i << std::endl;
    }
}

void printStringVector(std::vector<std::string> v)
{
    std::cout << "size: " << v.size() << std::endl;
    for (auto i : v)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    std::vector<int> v1;
    printIntVector(v1);
    std::vector<int> v2(10);
    printIntVector(v2);
    std::vector<int> v3(10, 42);
    printIntVector(v3);
    std::vector<int> v4{10};
    printIntVector(v4);
    std::vector<int> v5{10, 42};
    printIntVector(v5);
    std::vector<std::string> v6{10};
    printStringVector(v6);
    std::vector<std::string> v7{10, "hi"};
    printStringVector(v7);

    return 0;
}

```

## 练习 3.17
从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改成大写形式。然后输出改变后的结果，每个词占一行。
```c++
#include <iostream>
#include <vector>
#include <cctype>

int main()
{
    std::string str;
    std::vector<std::string> svec;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> str;
        svec.push_back(str);
    }

    for (auto &s : svec)
    {
        for (auto &c : s)
        {
            c = toupper(c);
        }
        std::cout << s << std::endl;
    }

    return 0;
}

```


## 练习 3.18
下面的程序合法吗？如果不合法，你准备如何修改？
```c++
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    //ivec[0] = 42;   // 不合法，不能用下标插入值
    ivec.push_back(42);

    return 0;
}

```

## 练习 3.19
如果想定义一个含有10个元素的vector对象，所有元素的值都是42，请列举出三种不同的实现方法。哪种方法更好呢？为什么？
```c++
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec1(10, 42);     // 固定值时这种方法更简洁

    std::vector<int> ivec2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };

    std::vector<int> ivec3;             // 没有固定值时单个添加,列表初始化并不会带来多大的效率提升
    for (int i = 0; i < 10; i++)
    {
        ivec3.push_back(42);
    }

    std::cout << ivec1.size() << " " << ivec2.size() << " " << ivec3.size() << std::endl;

    return 0;
}

```

## 练习 3.20
读入一组整数并把它们存入一个vector对象，将每对相邻整数的和输出出来。改写你的程序，这次要求先输出第一个和最后一个元素的和，接着输出第2个和倒数第2个元素的和，以此类推。
```c++
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec={ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (decltype(ivec.size()) i = 0; i < ivec.size() - 1; i++)
    {
       std::cout << ivec[i] + ivec[i+1] << std::endl;
    }

    std::cout << "----------------------" << std::endl;

    for (decltype(ivec.size()) i = 0; i < (ivec.size() % 2 != 0 ? ivec.size()/2+1 : ivec.size()/2); i++)
    {
        if (ivec.size()%2 != 0 && i == ivec.size()/2)
        {
            std::cout << "center:" << ivec[i]<< std::endl;
        }
        else
        {
            std::cout << ivec[i] + ivec[ivec.size()-1-i] << std::endl;
        }
    }

    return 0;
}

```

