#include <iostream>

int main()
{
    int n;
    std::cout << "insert the maximum number to calculate the multiplication table :  "; std::cin >> n;
    std::cout << "    ";
    for(int i = 0; i <= n; i++)
    {
        std::cout.width(3); std::cout << std::right << i;
    }
    std::cout << '\n';
    for (int i = 0; i <= n; i++)
    {
        std::cout << i << " - ";
        for(int j = 0; j <= n; j++)
        {
           std::cout.width(3); std::cout << std::right << i*j ;
        }
        std::cout << "\n";
    }
}