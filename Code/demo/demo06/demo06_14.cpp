#include <iostream>
#include <vector>

// 从vector容器获取一个元素
int getint(std::vector<int> &v)
{
    return v[0];
}

// 输出传参值
void printint(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    std::vector<int> v = {1, 1, 1, 1 , 1, 1, 1, 1, 1 };
    int a = getint(v);

    const int b = 10;
    printint(a);
    printint(b);// 当传参是常量时不能使用引用类型


    return 0;
}
