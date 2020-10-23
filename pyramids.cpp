#include <iostream>

int main()
{
    int r;
    std::cout << "enter row : " ; std::cin >> r;

    for(int i = 0; i < r; i++)
    {
        for(int j = 1; j <= r+(r*2-1); j++)
        {
            if((j >= r - i && j <= r ) || (j <= r + i && j >= r))
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}