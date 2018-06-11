## 容器长度类型size_type
要使用size_type，需首先指定它由哪种类型定义的。
```c++
vector<int>::size_type    // 正确
vector::size_type		  // 错误
```
使用decltype遇到下标类型
```c++
vector<int> ivec;
decltype(ivec.size()) i = 0;
```

## 尾后迭代器end
因为end返回的迭代器并不实际指示某个元素，所以不能对其递增或解引用的操作。

## 左值
左值(lvalue)是指那些求值结果为对象或函数的表达式。一个表示对象的非常量左值可以作为赋值运算符的左侧运算符对象。

## 右值
右值(rvalue)是指一种表达式，其结果是值而非所在的位置。

右值只有两种：1.临时值。2.字面量。


## 数组转换成指针
```c++
int ia[10];		// 含有10个整数的数组
int* ip = id;	// ia转换成指向数组首元素的指针
```
当数组被用作decltype关键字的参数，或者作为取地址符(&)、sizeof及typeid等运算符的运算对象时，上述转换不会发生。
