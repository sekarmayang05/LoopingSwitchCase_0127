#include <iostream>
using namespace std;

float luasPersegiPanjang(float x, float y){
    return x * y;
}

float luaslingkaran(float x){
    return 3.14 * x * x;
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

       