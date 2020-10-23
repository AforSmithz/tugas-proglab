#include <iostream>

int main()
{
    int n;
    std::cout << "Insert the length of the array : \n";
    std::cin >> n;
    std::cout << "\n";
    int a[n],b[n];

    for(int i = 1; i <= 2; i++)
    {
        std::cout << "Enter elements of array " << i << std::endl;
        for (int j = 0; j < n; j++)
        {
            switch(i)
            {
                case 1:
                std::cout << "Enter element a" << j+1 << " : "; std::cin >> a[j];
                break;
                case 2:
                std::cout << "Enter element b" << j+1 << " : "; std::cin >> b[j];
            }
        }
        std::cout << "\n"; 
    }
    std::cout << "Intersection : " << std::endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i] == b[j])
            {
                std::cout << a[i] << std::endl;
            }
        }
    }

}