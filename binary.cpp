#include <iostream>

int main()
{
    int n,b[4];
    std::cout << "Insert a number : "; std::cin >> n;

    for(int i = 3; n>0; i--)
    {
        b[i] = n%2;
        n /= 2;
    }
    for (int i = 0; i < 4; i++)
    {
        std::cout << b[i];
    }
    std::cout << "\n";
}