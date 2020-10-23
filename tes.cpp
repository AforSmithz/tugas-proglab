#include <iostream>

int main()
{
    int pem,ro,gra,man;
    pem = 0;
    ro = 0;
    gra = 0;
    man = 0;
    for (pem = 1; pem <= 3; pem ++)
        for (ro = 1; ro <= pem; ro++)
            for(gra = pem; gra >= ro; gra--)
                man = man + gra;
    if (pem > ro && gra > man)
    {
        std::cout << man << " " << gra << " " << ro << " " << pem;
    }
    else
    {
        std::cout << pem << " " << ro << " " << gra << " " << man;
    } 
        
}