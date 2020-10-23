#include <iostream>

void detect(float a);

int main()
{
    float a;
    std::cout << "enter number" << std::endl;
    std::cin >> a;
    detect(a);
}

void detect(float a)
{
    if ( (int) a != a)
    {
        std::cout << "have decimal value" << std::endl;
    }
    else 
    {
        std::cout << "doesn't have any decimal place" <<std::endl;
    }
}