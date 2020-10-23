#include <iostream>

typedef struct receipt
{
    std::string item;
    int qty;
    int price; 
}receipt;

std::string expensive(receipt arr[], int n);

int main()
{
    int n,totalAll,average;
    std::cout << "enter how many kind of item you buy : "; std::cin >> n;
    receipt a[n];
    for(int i = 0; i < n; i++)
    {
        std::cout << "enter item name : " ; std::cin >> a[i].item;
        std::cout << "enter the quantitiy of item : "; std::cin >> a[i].qty;
        std::cout << "enter the price of the item : "; std::cin >> a[i].price;
        std::cout << "\n";
    }
    std::cout << "----------------------------\n";
    std::cout << "|          RECEIPT          |\n";
    std::cout << "----------------------------\n";
    std::cout << " Item | qty | price | total \n";
    std::cout << "****************************\n";
    for(int i = 0; i < n; i++)
    {
        int total = a[i].price * a[i].qty;
        std::cout << a[i].item << " | " << a[i].qty << " | " << a[i].price << " | " << total << std::endl;
        totalAll += total;
    }
    average = totalAll/n;           
    std::cout << "Total : " << totalAll << std::endl;
    std::cout << "Average price : " << average << std::endl;
    std::cout << "Most expensive : " << expensive(a,n) << std::endl;
}

std::string expensive(receipt arr[], int n)
{
    std::string total = arr[0].item;
    int temp = arr[0].price;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i].price > temp)
        {
            total = arr[i].item;     
        }
    }
    return total;
}