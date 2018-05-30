#include <iostream>

// bool类型除了0以外都是true

int main()
{
    bool loop = true;
    int input = 0;

    while(loop)
    {  
        std::cin >> input;
        loop = input;
        std::cout << "loop :" << loop << std::endl;
    }

    std::cout << "input :" << input << std::endl;

    return 0;
}
