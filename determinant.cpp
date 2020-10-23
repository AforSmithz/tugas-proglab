#include <iostream>
#include <cmath>

int main()
{
    float a,b,c,d;

    std::cout << "enter the coefficient of a : " << std::endl; std::cin >> a;
    std::cout << "enter the coefficient of b : " << std::endl; std::cin >> b;
    std::cout << "enter the coefficient of c : " << std::endl; std::cin >> c;

    d = pow(b,2) - 4*a*c;

    float x1 = (-b + sqrt(d)) / 2*a;
    float x2 = (-b - sqrt(d))/ 2*a;

    if(d < 0)
    {
        std::cout << "the roots of the function are imaginary" << std::endl;
    }
    else if(d == 0)
    {
        std::cout << "the roots of the function are real numbers and the same" << std::endl << "which is : " << x1 << std::endl;
    }
    else 
    {
        std::cout << "the roots of the function are real numbers which is " << std::endl << "x1 :" << x1 << std::endl << "x2 :" << x2 <<std::endl;
    }

}