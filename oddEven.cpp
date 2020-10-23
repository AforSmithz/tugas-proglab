#include <iostream>

void oddEven(int a);

int main(void) 
{
    int a;

    std::cout << "enter a number" << std::endl;
    std::cin >> a;

    if (!std::cin)
    {
        std::cout << "enter number only please! " <<std::endl;
        return 1;
    }

    oddEven(a);
    
    return 0;
}

void oddEven(int a)
{
    switch(a % 2)
    {
        case 1 :
            std::cout << "odd" << std::endl;
            break;
        case 0 :
            std::cout << "even" << std::endl;
            break;
    }   
}