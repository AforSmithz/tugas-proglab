#include <iostream>

int main()
{
    int r;
    std::cout << "enter number of rows: "; std::cin >> r;

    for(int i = 0; i < r ; i++)
    {
        for(int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}