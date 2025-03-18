#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //Perulangan While
    int x;
    int PerulanganWhile = 0;
    int PerulanganDo = 0;

    srand(time(0));
    x = rand() %10;
    cout << "Perulangan While " << endl;
    cout << "Nilai x awal = " << x << endl;

    while(x < 7){
        cout << "Nilai x "<< x << "Lari Keliling " << endl;
        x = rand() %10;
        PerulanganWhile++;
    }

    cout << "Nilai X terakhir = " << x << endl;
    cout << " Jumlah Perulangan = " << PerulanganWhile << endl; 

    //Perulangan Do While
    cout << endl;
    cout << "Perulangan Do While " << endl;
    do{
        cout << "Nilai x = "<< x << " Lari Keliling " << endl;
        x = rand() % 10;
        PerulanganDo++;
    }while(x < 7);
    cout << "Nilai X terakhir : " << x << endl;
    cout << "Jumlah Perulangan Do While : " << PerulanganDo << endl;
}