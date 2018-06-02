
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