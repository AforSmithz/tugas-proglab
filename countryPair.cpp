#include <iostream>

int main()
{
    std::string a[5][2] = {{"Indonesia", "Jakarta"},{"Philippines","Manila"},{"Austria","Vienna"},{"India","New Delhi"},{"Iran","Taheran"}};

    for(int i = 0; i < 5; i++)
    {
        std::cout << a[i][0] << ' '  << a[i][1] << std::endl;
    }
}