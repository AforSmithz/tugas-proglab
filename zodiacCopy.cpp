#include <iostream>
#include <iomanip>

int main()
{
    int d,m;


    std::cout << "input your birthdate (day) : "; std::cin >> d;
    std::cout << "input your birthdate (month) : "; std::cin >> m;

    clock_t start, end;
    start = clock(); 

    switch (m) 
    {
        case 1 :
        if (d <= 19)
        {
            std::cout << "Capricorn" << std::endl;
        }
        else 
        {
            std::cout << "Aquarius" <<std::endl;
        }
        break;
        
        case 2:
        if (d <= 18)
        {
            std::cout << "Aquarius" << std::endl;
        } 
        else
        {
            std::cout << "Pisces" << std::endl;
        }

        case 3:
        if(d <= 20)
        {
            std::cout << "Pisces" << std::endl;
        }
        else 
        {
            std::cout << "Aries" << std::endl;
        }
        break;

        case 4:
        if(d <= 19 )
        {
            std::cout << "Aries" << std::endl;
        }
        else 
        {
            std::cout << "Taurus" <<std::endl;
        }
        break;

        case 5:
        if(d <= 20)
        {
            std::cout << "Taurus" << std::endl;
        }
        else
        {
            std::cout << "Gemini" << std::endl;
        }
        break;

        case 6:
        if(d <= 20)
        {
            std::cout << "Gemini" <<std::endl;
        }
        else
        {
            std::cout << "Cancer" << std::endl;
        }
        break;

        
        case 7:
        if(d <= 22)
        {
            std::cout << "Cancer" <<std::endl;
        }
        else
        {
            std::cout << "Leo" << std::endl;
        }
        break;

        
        case 8:
        if(d <= 22)
        {
            std::cout << "Leo" <<std::endl;
        }
        else
        {
            std::cout << "Virgo" << std::endl;
        }
        break;

        
        case 9:
        if(d <= 22)
        {
            std::cout << "Virgo" <<std::endl;
        }
        else
        {
            std::cout << "Libra" << std::endl;
        }
        break;
        
        
        case 10:
        if(d <= 22)
        {
            std::cout << "Libra" <<std::endl;
        }
        else
        {
            std::cout << "Scorpio" << std::endl;
        }
        break;

        
        case 11:
        if(d <= 21)
        {
            std::cout << "Scorpio" <<std::endl;
        }
        else
        {
            std::cout << "Sagitarius" << std::endl;
        }
        break;

        
        case 12:
        if(d <= 20)
        {
            std::cout << "Sagitarius" <<std::endl;
        }
        else
        {
            std::cout << "Capricorn" << std::endl;
        }
    }
    end = clock(); 
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "Time taken by program is : " << std::fixed  
         << time_taken << std::setprecision(5); 
    std::cout << " sec " << std::endl; 
}