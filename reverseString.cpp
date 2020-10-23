#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout << "enter a string : "; getline(std::cin,s);
    int len = s.length();
    for(int i = len; i >= 0; i--)
    {
        std::cout << s[i];
    }
    std::cout << "\n";
    std::cout << len ;
}