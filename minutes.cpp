#include <iostream>
#include <cmath>

int diff(int a[],int b[]);

int main()
{
    int h[2], m[2];
    for (int i = 1 ; i <= 2 ; i++)
    {
        std::cout << "Insert hour input " << i << std::endl;
        std::cin >> h[i-1];
        std::cout << "insert minute input " << i << std::endl;
        std::cin >> m[i-1];
    }

    int difference = diff(h,m);

    std::cout << "the difference between the two times is " << difference << " minutes" << std::endl;
}

int diff(int a[],int b[])
{
    int hours = abs((a[1]-a[0]) * 60);
    int minutes = abs(b[1]-b[0]);
    int result = hours + minutes;
 
    return result;
}