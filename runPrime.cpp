#include <iostream>

int main()
{
    int n;
    bool r = 0;
    std::cout << "input a number "; std::cin >> n;

    for(int i = 2; i < n; i++)
    {
        int a = n % i;
        r = 0;
        if(a == 0 || n == 2)
        {
            std::cout << n << " is not a prime number" << std::endl;
            break;
        }
        else 
        {
            r = 1;   
        }
    }
    if( r == 1)
    {
         std::cout << n << " is a prime number" << std::endl;
    }
   
}