#include <iostream>

/*
 * (a)合法 
 * (b)声明错误，使用了默认形参后，默认形参后的形参都要有默认值 
 */

int ff(int a, int b = 0, int c = 0);
char *init(int ht = 24, int wd, char bckgrnd); 

int main()
{

    return 0;
}
