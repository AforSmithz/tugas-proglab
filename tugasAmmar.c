#include <stdio.h>

int main(void)
{

    float x = 1.0;
    for(double i = 3.0; i <= 89; i+=2 )
    {
        float y = (int)((x/i) * 100 + 0.5);
        y = y/100;
        x =  x + y;
    }
    printf("%.2f \n",x);
    return 0;

}