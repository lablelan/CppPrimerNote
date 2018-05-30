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
