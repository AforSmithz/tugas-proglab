#include <iostream>
using namespace std;

int main ()
{
    //KAMUS
    int NIM;

    //ALGORITMA
    cout << "Masukkan akhiran NIM: "; cin >> NIM;

    if(NIM > 0, NIM <= 100)                         // NIM 001-100
    {
        if(NIM%2 == 0)
        {
            cout << "Mahasiswa masuk ke kelas K2";
        }
        else
        {
            cout << "Mahasiswa masuk ke kelas K1";
        }
    }

    else if(NIM > 100, NIM <= 200)                  // NIM 101-200
    {
        if(NIM%2 == 0)
        {
            cout << "Mahasiswa masuk ke kelas K4";
        }
        else
        {
            cout << "Mahasiswa masuk ke kelas K3";
        }
    }
    else if(NIM > 200, NIM <= 300)                  // NIM 201-300
    {
        if(NIM%2 == 0)
        {
            cout << "Mahasiswa masuk ke kelas K6";
        }
        else
        {
            cout << "Mahasiswa masuk ke kelas K5";
        }
    }
    else if(NIM > 300, NIM <= 400)                  // NIM 301-400
    {
        if(NIM%2 == 0)
        {
            cout << "Mahasiswa masuk ke kelas K8";
        }
        else
        {
            cout << "Mahasiswa masuk ke kelas K7";
        }
    }
}  