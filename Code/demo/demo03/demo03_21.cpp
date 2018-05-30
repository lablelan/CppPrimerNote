#include <iostream>
#include <vector>

void printIntVector(std::vector<int> v)
{
    std::cout << "size: " << v.size() << std::endl;
    for (auto iter = v.cbegin(); iter != v.cend(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
}

void printStringVector(std::vector<std::string> v)
{
    std::cout << "size: " << v.size() << std::endl;
    for (auto iter = v.cbegin(); iter != v.cend(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
}

int main()
{
   std::vector<int> v1;
   printIntVector(v1);
   std::vector<int> v2(10);
   printIntVector(v2);
   std::vector<int> v3(10, 42);
   printIntVector(v3);
   std::vector<int> v4{10};
   printIntVector(v4);
   std::vector<int> v5{10, 42};
   printIntVector(v5);
   std::vector<std::string> v6{10};
   printStringVector(v6);
   std::vector<std::string> v7{10, "hi"};
   printStringVector(v7);


    return 0;
}
