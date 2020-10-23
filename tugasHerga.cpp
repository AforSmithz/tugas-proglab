#include <iostream>
#include <string>
//using namespace std;

int main()
{
    std::string NIM;
    std::string nama;
    int umur;
    std::string alamat;

    std::cout << "Masukkan NIM : ";
    getline(std::cin,nama);
    std::cout << "Masukkan nama : "; 
    getline(std::cin,nama);
    std::cout << "Masukkan umur : ";
    std::cin >> umur;
    std::cout << "Masukkan alamat : ";
    std::cin >> alamat;

    std::cout << "--------------------\n";
    std::cout << "Halo, " << nama << std::endl;
    std::cout << "Data anda :\n";
    std::cout << "1. Nama : " << nama << std::endl;
    std::cout << "2. NIM : " << NIM << std::endl;
    std::cout << "3. Umur : " << umur << std::endl;
    std::cout << "4. Alamat : " << alamat;

    std::cout << "Jumlah huruf pada Nama Mahasiswa adalah " << nama.length();
    return 0;
}