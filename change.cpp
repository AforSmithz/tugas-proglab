#include <iostream>

int main()
{
    int drink,len,pay,owed,money,amount;
    std::cout << "Enter the price of the soft drink (Cola = 12, Milo = 10, Fanta = 20) : "; std::cin >> drink;
    if(drink != 12 && drink != 10 && drink != 20)
    {
        std::cout << "please choose one of these amount only (12,10,20)";
        return 1;
    }
    std::cout << "please pay the amount you want to pay : "; std::cin >> pay;

    
    if(pay < drink)
    {
        std::cout << "the amount of money you pay is not enough" << std::endl;
    }

    else
    {
        owed = pay - drink;

        int change[4] = {10,5,2,1};
        int changeAmount[4] = {0,0,0,0};
        len = sizeof(change)/sizeof(int);
        amount = 0;


        for (int i = 0; i < len; i++)
        {
            changeAmount[i]+= owed/change[i];
            owed %= change[i];       
        }
        
        std::cout << "your change is " << std::endl; ;
        std::cout << changeAmount[0] << " sheets of" << " 10k \n";
        std::cout << changeAmount[1] << " sheets" << " 5k \n";
        std::cout << changeAmount[2] << " sheets of" << " 2k \n";
        std::cout << changeAmount[3] <<" sheets of" << " 1k \n";
    }
}