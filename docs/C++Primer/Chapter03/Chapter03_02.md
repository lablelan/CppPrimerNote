## string上的操作
| Name | Descriptions |
| - | -: |
| os<<s | 将s写到输出流os当中，返回os |
| is>>s | 从is中读取字符串赋给s，字符串以空白分隔，返回is |
| getline(is, s) | 从is中读取一行赋给s，返回is |
| s.empty() | s为空返回true，否则返回false |
| s.size() | 返回s中字符的个数 |
| s[n] | 返回s中第n个字符的引用，位置n从0计起 |
| s1+s2 | 返回s1和s2连接后的结果 |
| s1=s2 | 用s2的副本代替s1中原来的字符 |
| s1==s2 | 如果s1和s2中所含的字符串完全一样返回true。大小写敏感 |
| s1!=s2 | 如果s1和s2中所含的字符串不一样返回true，大小写敏感 |
| <, <=, >, >= | 利用字符在字典的顺序进行比较，且对字母的大小写敏感 |

## 练习 3.2
编写一段程序从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词。
```c++
#include <iostream>

int main()
{
    std::string s1;
    getline(std::cin, s1);
    std::cout << s1 << std::endl;

    std::string s2;
    std::cin >> s2;
    std::cout << s2 << std::endl;

    return 0;
}
```

## 练习 3.3
请说明string类的输入运算符和getline函数分别是如何处理空白字符串的。
```c++
#include <iostream>

// 
// 输入运算符：忽略字符串头的所有空白字符，遇到第一个非字符串头空白字符截断
// getline:读取一行，直到遇到换行符
//

int main()
{
    /*
    std::string s1;
    std::cin >> s1;
    std::cout << s1 << std::endl;
    std::cout << s1.size() << std::endl;
    */

    std::string s2;
    getline(std::cin, s2);
    std::cout << s2 << std::endl;
    std::cout << s2.size() << std::endl;
    
    return 0;
}
```

## 练习 3.4
编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个字符串。改写上述程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串。
```c++
#include <iostream>

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    if (s1 > s2)
    {
        std::cout << s1 << std::endl;
    }
    else 
    {
        std::cout << s2 << std::endl;
    }

    if (s1.size() > s2.size())
    {
        std::cout << s1 << std::endl;
    }
    else
    {
        std::cout << s2 << std::endl;
    }

    return 0;
}
```

## 练习3.5
编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串。然后修改上述程序，用空格把输入的多个字符串分隔开来。
```c++
#include <iostream>

int main()
{
    std::string s;
    std::string sp;
    while(true)
    {
        std::string s1;
        std::cout << "Please enter a word: ";
        std::cin >> s1;
        if (s1 == "quit")
        {
            break;
        }
        s = s + s1;
        if (sp.empty())
        {
            sp = s1;
        }
        else
        {
            sp = sp + " " + s1;
        }
    }

    std::cout << s << std::endl;
    std::cout << sp << std::endl;

    return 0;
}
```

## ctype头文件中的函数
| Name | Descriptions |
| - | -: |
| isalnum(c) | 当c是字母或数字时为真 |
| isalpha(c) | 当c是字母时为真 |
| iscntrl(c) | 当c是控制字符时为真 |
| isdigit(c) | 当c是数字时为真 |
| isgraph(c) | 当c不是空格但可打印时为真 |
| islower(c) | 当c是小写字母时为真 |
| isprint(c) | 当c是可打印字符时为真(即c是空格或具有可视形式) |
| ispunct(c) | 当c是标点符号时为真(即c不是控制字符、数字、字母、可打印空白中的一种) |
| isspace(c) | 当c是空白时为真(即c是空格、横向制表符、纵向制表符、回车符、换行符、进纸符的一种) |
| isupper(c) | 当c是大写字母时为真 |
| isxdigit(c) | 当c是十六进制数字时为真 |
| tolower(c) | 如果c是大写字母，输出对应的小写字母；否则原样输出c |
| toupper(c) | 如果c是小写字母，输出对应的大写字母；否则原样输出c |

## 练习 3.6
编写一段程序，使用范围for语句将字符串内的所有字符串用X代替
```c++
#include <iostream>

int main()
{
    std::string str = "hello admin, what the X mean?";
    for (auto &c : str)
    {
        c = 'X';
    }

    std::cout << str << std::endl;

    return 0;
}
```

## 练习 3.7
就上一题完成的程序而言，如果将循环控制变量的类型设为char将发生什么？先估计一下结果，然后实际变成进行验证。
```c++
#include <iostream>

// 使用char无法改变字符串的内容，因为变量只是一个副本

int main()
{
    std::string str = "hello, how old are you?";
    for (char c : str)
    {
        c = 'X';
    }
    std::cout << str << std::endl;

    return 0;
}
```

## 练习 3.8
分别用while循环和传统的foe循环重写第一题的程序，你觉得哪种形式更好呢？为什么？
```c++
#include <iostream>

int main()
{
    std::string str1 = "hello wrold!";

    for (auto &c : str1)
    {
        c = 'X';
    }
    std::cout << str1 << std::endl;

    std::string str2 = "hi world!";

    int i = 0;
    while(i <= str2.size())
    {
        auto &c = str2[i];
        c = 'X';
        i++;
    }
    std::cout << str2 << std::endl;


    return 0;
}
```

## 练习 3.9
下面的程序有何作用？它合法吗？如果不合法，为什么？
```c++
#include <iostream>

// 合法，但s是空字符串，应该判断是否可以访问

int main()
{
    std::string s;
    std::cout << s[0] << std::endl;
    std::cout << s.size() << std::endl;

    return 0;
}
```

## 练习 3.10
编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。
```c++
#include <iostream>
#include <cctype>

int main()
{
    std::string str = "hello. worl.d";
    std::string tmp_str;
    for (auto &c : str)
    {
        if (!ispunct(c))
        {
            tmp_str = tmp_str + c;
        }
    }

    str = tmp_str;

    std::cout << str << std::endl;

    return 0;
}
```

## 练习 3.11
下面的范围for语句合法吗？如果合法，c的类型是什么？
```c++
#include <iostream>

// 合法，c的类型是const char &

int main()
{
    const std::string s = "Keep out!";
    for (auto &c : s)
    {
    
    }
    
    return 0;
}
```

