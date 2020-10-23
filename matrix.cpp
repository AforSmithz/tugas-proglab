#include <iostream>

int main()
{
    int c[2][2];
    int a[2][2] = {{6,7},{5,8}};
    int b[2][2] ={{1,3},{4,1}};

    int i,j;
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }
    }
    for(i =0; i<2; i++)
    {
        for(j=0;j<2;j++)
        {
            std::cout << c[i][j] << " ";
        }
    }
}