#include <iostream>

int main()
{
    int a[3],terkecil;
    for(int i = 0; i < 3; i++)
    {
        std::cin >> a[i];
    }
    terkecil = a[0] + a[1];
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if (a[i] != a[j])
            {
                if (a[i] + a[j] < terkecil)
                {
                    terkecil = a[i] + a[j];
                }
            }
        }
    }

    std::cout << terkecil << std::endl;
}