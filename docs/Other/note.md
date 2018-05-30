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

## 