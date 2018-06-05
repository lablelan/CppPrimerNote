#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> v;
    auto iter = v.begin();
    *iter++;        // iter指针指向下一个元素，并进行解引用
    //(*iter)++;      // 解引用后类型是string，string没有实现++操作符
    //*iter.empty();      // 解引用优先级低于.操作，iter中没有empty方法
    iter->empty();          // 调用iter指向对象的empty成员函数
    //++*iter;                    // 先执行了解引用，但string没有实现++操作符
    iter++->empty();                // 将iter指向下一元素并调用iter指向对象的empty函数


    return 0;
}
