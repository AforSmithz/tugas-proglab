#include <iostream>
#include <iomanip>

int main()
{
    int d,m;
    std::cout << "input your birthdate (day) : "; std::cin >> d;
    std::cout << "input your birthdate (month) : "; std::cin >> m;

    clock_t start, end;
    start = clock(); 

    if( (d >= 21 && m == 3) || (d <= 19 && m == 4) )
    {
        std::cout << "Aries" << std::endl;
    }
    else if((d >= 20 && m == 4) || (d <= 20 && m == 5))
    {
        std::cout << "Taurus" << std::endl;
    } 
    else if((d >= 21 && m == 5) || (d <= 20 && m == 6))
    {
        std::cout << "Gemini" << std::endl;
    }
    else if((d >= 21 && m == 6) || (d <= 22 && m == 7))
    {
        std::cout << "Cancer" << std::endl;
    }
    else if((d >= 23 && m == 7) || (d <= 22 && m == 8))
    {
        std::cout << "Leo" << std::endl;
    }
    else if((d >= 23 && m == 8) || (d <= 22 && m == 9))
    {
        std::cout << "Virgo" << std::endl;
    }
    else if((d >= 23 && m == 9) || (d <= 22 && m == 10))
    {
        std::cout << "Libra" << std::endl;
    }
    else if((d >=23  && m == 10) || (d <= 21 && m == 11))
    {
        std::cout << "Scorpio" << std::endl;
    }
    else if((d >= 21 && m == 11) || (d <= 20 && m == 12))
    {
        std::cout << "Sagitarius" << std::endl;
    }
    else if((d >= 22 && m == 12) || (d <= 19 && m == 1))
    {
        std::cout << "Capricorn" << std::endl;
    }
    else if((d >= 20 && m == 1) || (d <= 18 && m == 2))
    {
        std::cout << "Aquarius" << std::endl;
    }
    else if((d >= 19 && m == 2) || (d <= 20 && m == 3))
    {
        std::cout << "Pisces" << std::endl;
    }
    end = clock(); 
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "Time taken by program is : " << std::fixed  
         << time_taken << std::setprecision(10); 
    std::cout << " sec " << std::endl; 
    return 0;
}