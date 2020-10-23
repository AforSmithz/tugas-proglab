#include <stdio.h>

int main(void) 
{
    int status, input;
    printf("input number : \n");
    status = scanf("%i", &input);

    if(status!=1)
    {
        printf("tolong masukkan angka");
        return 1;
    }
    
    printf("%i", input + 2);
}

