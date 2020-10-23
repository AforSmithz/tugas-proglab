#include <iostream>

int main()
{
    int year,age;
    std::cout << "enter your born year" << std::endl;
    std::cin >> year;


    age = 2020 - year;

    std::cout << "you were born in " << year << " "<< "and your age is " << age << std::endl; 

    return 0; 
}