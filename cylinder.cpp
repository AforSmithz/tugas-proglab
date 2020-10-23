#include <iostream>

#define phi 3.14

int main()
{
    float r,h;
    std::cout << "enter base radius: " << std::endl;
    std::cin >> r ;
    std::cout << "enter cylinder height :" << std::endl;
    std::cin >> h ;
    
    if(!std::cin)
    {
        std::cout << "enter number only please" << std::endl;
        return 1;
    }
    
    float result = phi * r * r * h;

    std::cout << "the volume of the cylinder is: " << result << std::endl; 
}