## 标准容器迭代器的运算符
| Name | Descriptions |
| - | -: |
| *iter | 返回迭代器iter所指元素的引用 |
| iter->mem | 解引用iter并获取该元素的名为mem的成员，等价于(*iter).mem |
| ++iter | 令iter指示容器中的下一个元素 |
| --iter | 令iter指示容器中的上一个元素 |
| iter1==iter2 | 判断两个迭代器是否相等(不相等)，如果两个地带器指示的是同一个元素或者它们是同一个容器的尾后迭代器，则相等；反之，不相等。 |
| iter1!=iter2 | 对 iter1 == iter2 取反 |

## 练习 3.21
请使用迭代器重做3.3.3节(第94页)的第一个练习。
```c++
#include <iostream>
#include <vector>

void printIntVector(std::vector<int> v)
{
    std::cout << "size: " << v.size() << std::endl;
    for (auto iter = v.cbegin(); iter != v.cend(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
}

void printStringVector(std::vector<std::string> v)
{
    std::cout << "size: " << v.size() << std::endl;
    for (auto iter = v.cbegin(); iter != v.cend(); ++iter)
    {
        std::cout << *iter << std::endl;
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

## 练习 3.22
修改之前那个输出text第一段的程序，首先把text的第一段全改成大写形式，然后再输出它。
```c++
#include <iostream>
#include <vector>
#include <cctype>

int main()
{
    std::vector<std::string> text;

    // 模拟存放两个段落到text
    std::string s1 = "hello world";
    std::string s2;
    std::string s3 = "hi world";

    text.push_back(s1);
    text.push_back(s2);
    text.push_back(s3);

    for (auto iter = text.begin(); iter != text.end() && !iter->empty(); ++iter)
    {
        for (auto &c : (*iter))
        {
            c = toupper(c);
        }
        std::cout << *iter << std::endl;
    }

    return 0;
}

```

## 练习 3.23
编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值都变成原来的两倍。输出vector对象的内容，检验程序是否正确。
```c++
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec(10, 42);

    for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
    {
        *iter = (*iter << 1);               // 左移一位相当于 乘2
        std::cout << *iter << std::endl;
    }

    return 0;
}

```

## vector和string迭代器支持的运算
| Name | Descriptions |
| - | -: |
| iter + n | 迭代器加上一个整数仍得一个迭代器，迭代器指示的新位置与原来相比向前移动了若干个元素。结果迭代器或者指示容器内的一个元素，或者指示容器尾元素的下一位置 |
| iter - n | 迭代器减去一个整数仍得一个迭代器，迭代器指示的新位置与原来相比向前移动了若干个元素。结果迭代器或者指示容器内的一个元素，或者指示容器尾元素的下一位置 |
| iter1 += n | 迭代器加法的复合赋值语句，将iter1加n的结果赋给iter1 |
| iter1 -= n | 迭代器减法的复合赋值语句，将iter1减n的结果赋给iter1 |
| iter1 - iter2 | 两个迭代器详见的结果是它们之间的距离，也就是说，将运算符右侧的迭代器向前移动差值个元素后将得到左侧的迭代器。参与运算的两个迭代器必须指向的是同一个容器中的元素或者尾元素的下一位置 |
| >、>=、<、<= | 迭代器的关系运算符，如果某迭代器指向的容器位置在另一迭代器所指位置之前，则说明前者小于后者。参与运算的两个迭代器必须指向的是同一个容器中的元素或者尾元素的下一位置 |