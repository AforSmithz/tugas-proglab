#include <iostream>

int main()
{
    int a[2][2],b[2][2];

    for(int i = 1; i <= 4; i++)
    {
        if(i <= 2)
        {
            std::cout << "Enter elements of matrix " << i << std::endl;
            for (int j = 0; j < 2; j++)
            {
                for(int k = 0; k < 2; k++)
                {
                    switch(i)
                    {
                        case 1:
                        std::cout << "Enter element a" << j+1 << k+1 << " : "; std::cin >> a[j][k];
                        break;
                        case 2:
                        std::cout << "Enter element b" << j+1 << k+1 << " : "; std::cin >> b[j][k];
                    }                
                }
            }
            std::cout << "\n";
        }

        else 
        {
            std::cout << "Matrix " << i-2 << std::endl;
            for (int j = 0; j < 2; j++)
            {
                switch(i)
                {
                    case 3:
                    std::cout << " " << a[j][0] << "   " << a[j][1] << "\n";
                    break;
                    case 4:
                    std::cout << " "<< b[j][0] << "   " << a[j][1] << "\n";
                }                 
            }    
            std::cout << "\n";       
        }
    }  

    std::cout << "Output Matrix " << std::endl;
    for (int j = 0; j < 2; j++)
    {
        std::cout << " " << (a[j][0] * b[0][0]) + (a[j][1]*b[1][0]) << " " << (a[j][0]*b[0][1]) + (a[j][1]*b[1][1]) << "\n"; 
    } 
      
    std::cout << "\n";                        
}