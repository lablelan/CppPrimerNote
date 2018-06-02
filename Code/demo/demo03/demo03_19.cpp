#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec1(10, 42);     // 固定值时这种方法更简洁

    std::vector<int> ivec2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };

    std::vector<int> ivec3;             // 没有固定值时单个添加,列表初始化并不会带来多大的效率提升
    for (int i = 0; i < 10; i++)
    {
        ivec3.push_back(42);
    }

    std::cout << ivec1.size() << " " << ivec2.size() << " " << ivec3.size() << std::endl;

    return 0;
}
