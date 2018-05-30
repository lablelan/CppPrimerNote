#include <iostream>
#include <string>

int main()
{
	// 语法错误
	//std::cout << "aaaaa" << std::endl: // error: expected ‘;’ before ‘:’ token
	//std::cout << aaa a aaaa << std::endl; // aaa’ was not declared in this scope
	//std::cout << "aaaaaaaaaaa" std::endl; // error: expected ‘;’ before ‘std’
	
	// 类型错误
	//std::string str = 10; // initializing argument 1 of ‘std::basic_string<_CharT, _Traits, _Alloc>::basic_string(const _CharT*, const _Alloc&) [with _CharT = char; _Traits = std::char_traits<char>; _Alloc = std::allocator<char>]’ [-fpermissive]	

	// 声明错误
	int a = 0, b = 0;
	std::cout << c << b << a << std::endl; // error: ‘c’ was not declared in this scope

	return 0; 
}

