#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3};

    auto pbeg = v.begin();

    while (pbeg != v.end() && *pbeg >= 0)
    {
        std::cout << *++pbeg << std::endl;  // 先执行了++，访问了v.end()的值
    }

    return 0;
}
