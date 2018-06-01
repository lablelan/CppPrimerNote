#include <iostream>
#include <cstring>

int main()
{
    char s1[] = { 'h', 'e', 'l', 'l', 'o', ' ' };
    char s2[] = { 'w', 'o', 'r', 'l', 'd' };

    const int length = strlen(s1) + strlen(s2);
    char s[length + 1];
    memset(s, 0, sizeof(s));

    strcpy(s, s1);
    std::cout << s << std::endl;
    
    strcat(s, s2);
    std::cout << s << std::endl;

    return 0;
}
