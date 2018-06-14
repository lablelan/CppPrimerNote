/*
 * (a) 声明和定义都放在源文件中，inline函数（即内联函数）对编译器而言必须是可见的，以便能够在调用点展开该函数，与非inline函数不同的是，inline函数必须在调用该函数的每个文件中定义。当然，对于同一程序的不同文件，如果inline函数出现的话，其定义必须相同。 正因为如此，建议把inline函数的定义放到头文件中，在每个调用该inline函数的文件中包含该头文件。这种方法保证了每个inline函数只有一个定义，且程序员无需复制代码，并且不可能在程序的生命周期中引起无意的不匹配的事情。如果在头文件中定义非inline函数，一旦该头文件被多个文件包含，就会造成该非inline函数的“重定义”，因而，不建议将非inline函数的定义放在头文件中，但是非inline函数的声明是可以放在头文件中的。
 * (b) 声明放在头文件中,定义放在源文件中.
 */
