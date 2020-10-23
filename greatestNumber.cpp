#include <iostream>

int main()
{
    int num[4],great;
    num[0] = 0;
    for(int i = 1; i < 4; i++)
    {
        std::cout << "enter number " << i << " : "; std::cin >> num[i];
        if(num[i] > num[i-1])
        {
            great = num[i];
        }
    }  
    std::cout << "the greatest number is : " << great << std::endl;   
}