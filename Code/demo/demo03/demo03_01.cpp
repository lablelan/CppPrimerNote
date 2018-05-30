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
