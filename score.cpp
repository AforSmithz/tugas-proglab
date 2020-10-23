#include <iostream>

int main()
{
    int a;

    std::cout << "enter a test score" << std::endl; std::cin >> a;

    if ( a >= 60)
    {
        std::cout << "Pass" << std::endl;
    }
    
    else
    {
        std::cout << "Not Pass" << std::endl;
    }
    
}