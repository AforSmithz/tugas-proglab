#include <iostream>

int main()
{
    int y;
    std::cout << "enter a year : "; std::cin >> y;

    if((y % 4 == 0 && y % 100 != 0) || (y % 100 == 0 && y % 400 == 0))
    {
        std::cout << "leap year" << std::endl;
    }
    else
    {
        std::cout << "not leap year" << std::endl;
    }
    
}