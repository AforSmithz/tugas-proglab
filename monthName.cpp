#include <iostream>

int main()
{
    int m;
    std::cout << "enter a month in numbers : "; std::cin >> m;

    switch(m)
    {
        case 1:
        std::cout << "january" <<std::endl;
        break;

        case 2:
        std::cout << "February" << std::endl;
        break;

        case 3:
        std::cout << "March" << std::endl;

        case 4:
        std::cout << "April" << std::endl;
        break;

        case 5:
        std::cout << "May" << std::endl;

        case 6:
        std::cout << "June" << std::endl;
        break;

        case 7:
        std::cout << "July" << std::endl;
        break;

        case 8:
        std::cout << "August" << std::endl;
        break;

        case 9:
        std::cout << "September" << std::endl;
        break;

        case 10:
        std::cout << "October" << std::endl;
        break;

        case 11:
        std::cout << "November" << std::endl;
        break;

        case 12:
        std::cout << "December" << std::endl;
        break;
    }
}