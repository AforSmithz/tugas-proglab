#include <iostream>

int main()
{
    int v,s,t;
    std::cout << "enter speed" << std::endl;
    std::cin >> v;
    std::cout << "enter distance" << std::endl;
    std::cin >> s;

    t = s / v;

    std::cout << "the time traveled is: " << t << " " << "hours" << std::endl;

    return 0;
}