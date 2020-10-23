#include <iostream>

int main()
{
    int a[10];
    float total = 0;
    int i;
    char ans;
    for(i = 0; i < 10; i++)
    {
        std::cout << "Insert a number : "; std::cin >> a[i];
        total += a[i];
        std::cout << "Do you want to insert another number (Y/T)? "; std::cin >> ans;
        if(ans == 'Y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    std::cout << "Mean of the array is " << total/(i+1) << std::endl;
}