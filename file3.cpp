#include <iostream>
using namespace std;

float luasPersegiPanjang(float x, float y){
    return x * y;
}



int main (){
    int pilihan;
    float panjang,lebar,jejari;
    do{
        cout << "===Menu===" << endl;
        cout << "1. Menghitung Luas Persegi Panjang" << endl;
        cout << "2. Menghitung Luas Lingkaran" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih (1/2/3) : ";
        cin >> pilihan;

        switch(pilihan){
            case 1 :
                cout << "Menghitung Luas Persegi Panjang" << endl;
                cout << "Masukan Panjang : ";
                cin >> panjang;
                cout << "Maskan Lebar :";
                cin >> lebar;
                cout << "Luas Persegi Panjang = "
                << luasPersegiPanjang(panjang,lebar) << endl;
                break;
            case 2 :
                cout << "Menghitung Luas Lingkaran " << endl;
                cout << "Masukan Jari - Jari = ";
                cin >> jejari;
                cout << "Luas Lingkaran = "
                << luaslingkaran(jejari) << endl;
                break;
            case 3 :
                break;
            default : 
                cout << "Pilihan anda salah" << endl;
                break;
        }
    }while(pilihan != 3);
}