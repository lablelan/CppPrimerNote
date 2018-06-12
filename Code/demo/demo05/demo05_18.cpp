// (a)
do 
{
    int v1, v2;
    std::cout << "Please enter two numbers to sum:" ;
    if (cin >> v1 >> v2)
    {
        std::cout << "Sum is: " << v1 + v2 << std::endl;
    }
}
while(std::cin);

// (b)
int ival = 0;
do
{
    // ...
}
while(ival = get_response());

// (c)
int ival = 0;
do
{
    ival = get_response();
}
while(ival);
