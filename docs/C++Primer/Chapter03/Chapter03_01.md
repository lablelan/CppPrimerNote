## 练习 3.1
使用恰当的using声明重做1.4.1节(第11页)和2.6.2节(第67页)的练习。
1.4.1
```c++
#include <iostream>

using namespace std;

int main()
{
    // 练习 1.9
    int i = 50, sum = i;
    while (i++ < 100)
    {
        sum += i;
    }
    cout << "sum = " << sum << endl;

    // 练习1.10
    i = 10;
    while (i-- > 0)
    {
        cout << i << endl;
    }
    
    // 练习1.11
    cout << "Please enter two num";
    int a = 0, b = 0;
    cin >> a >> b;
    if (a > b)
    {
        i = b;
        b = a;
        a = i;
    }
    else
    {
        i = a;
        a = b;
        b = i;
    }
    while(i++ < b)
    {
        cout << i << endl;
    }

    return 0;
}
```
2.6.2
```c++

```