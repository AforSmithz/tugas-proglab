// NIM / NAMA   : 16420408 / Ardhika Daffa Muttaqien
// TANGGAL      : 17 Oktober 2020
// DESKRIPSI    : Diagram aktivitas Tuan Vin

#include <iostream>
using namespace std;

int main ()
{
    //KAMUS
    int cuaca, lembab, angin;

    //ALGORITMA
    cout << " Bagaimana cuaca hari ini? \n";
    cout << " 1. Cerah \n";
    cout << " 2. Mendung \n";
    cout << " 3. Gerimis \n";
    cout << " Cuaca: "; cin >> cuaca;

    switch(cuaca)
    {
        case 1 :
            cout << "\n Bagaimana kelembabannya? \n";
            cout << " 1. Tinggi \n";
            cout << " 2. Rendah \n";
            cout << " Kelembaban: ";cin >> lembab;
            switch(lembab)
            {
            case 1:
                cout << "\n Tidak perlu mengajak Tuan Vin \n";
                break;
            
            default:
                cout << "\n Yuk, ajak Tuan Vin! \n";
                break;
            }
            break;
        
        case 3 :
            cout << "\n Bagaimana anginnya? \n";
            cout << " 1. Kuat \n";
            cout << " 2. Sepoi-sepoi \n";
            cout << " Angin: ";cin >> angin;

            switch (angin)
            {
            case 1:
                cout << "\n Tidak perlu mengajak Tuan Vin \n";
                break;
            
            default:
                cout << "\n Yuk, ajak Tuan Vin! \n";
                break;
            }
            break;
        default:
            cout << "\n Yuk, ajak Tuan Vin! \n";

    }

}


