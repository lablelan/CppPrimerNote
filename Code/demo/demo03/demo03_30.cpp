#include <iostream>

int main()
{
   constexpr size_t array_size =10;
   int ia[array_size];
   // 数组下标从0开始，最后一个元素下标为array_size - 1
   for (size_t ix = 1; ix <= array_size; ++ix)
   {
       ia[ix] = ix;
   }

    return 0;
}
