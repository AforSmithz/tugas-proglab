#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d;

    printf("masukkan koefisien a : ");
    scanf("%f",&a);
    printf("masukkan koefisien b : ");
    scanf("%f", &b);
    printf("masukkan koefisien c : ");
    scanf("%f", &c);

    d = pow(b,2) - 4*(a*c);

    if(d < 0)
    {
        printf("akar persamaannya imajiner");
    }

    else 
    {
        float result = (-b + sqrt(d)) / 2*a;
        float result1 = (-b - sqrt(d))/ 2*a;

        printf("akar-akarnya adalah %.2f dan %.2f", result, result1);
    }
}