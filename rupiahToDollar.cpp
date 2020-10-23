#include <iostream>
#include <iomanip>

int main()
{
    float r,d;

    std::cout << "enter nominal : " << std::endl;
    std::cin >> r;

    if(!std::cin)
    {
        std::cout << "enter number only please" << std::endl;
        return 1;
    }

    d = r / 14835;

    std::cout << "your nominal in dollar is $" << std::setprecision(2) << d << std::endl; 

    return 0;
}