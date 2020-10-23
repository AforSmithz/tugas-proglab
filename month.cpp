#include <iostream>

int main()
{
    int n;
    std::cout << "enter number: "; std::cin >> n;

    

    if(n != 8 && n != 2)
    {
        n = n % 2;
        switch(n)
        {
            case 1:
            std::cout << 30 << std::endl;
            break;
            case 0:
            std::cout << 31 << std::endl;
        }    
    }
    else
    {
        switch(n)
        {
            case 2:
            std::cout << 28 <<" " <<  "or" << " " <<  29 << std::endl;
            break;
            case 8:
            std::cout << 31 << std::endl;
        }
    }

}