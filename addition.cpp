#include <iostream>

int main()
{
    int a,b,add;
    for( int i = 0 ; i < 2 ; i++)
    {
        std::cout << "enter number " << std::endl;
        
        switch(i)
        {
            case 1 :
                std::cin >> b;
                break;
            default :
                std::cin >> a;

        }
        if (!std::cin)
            {
                std::cout << "please input number only" <<std::endl;
                return 1;
            }
    }
    add = a + b;
    std::cout << "the result is " << add << std::endl;


    return 0;
}