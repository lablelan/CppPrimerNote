#include <iostream>

int main()
{
    //int* ip,i,&r = i;  // ip--int* i--int* r--(int*)& 
    //std::cout << "ip:" << ip << " i:" << i << " r:"<< r << std::endl;

    //int i, *ip = 0;    // i--int ip--int*
    //std::cout << "i:" << i << " ip:" << ip << std::endl;

    int* ip, ip2;      // ip--int* ip2--int*
    std::cout << "ip" << ip << " ip2:" << ip2 << std::endl;

    return 0;
}
