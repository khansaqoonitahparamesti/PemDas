#include <iostream>
using namespace std;

float luaspersegipanjang(float a, float b){
    return a* b;
}
float luasLingkaran(float a){
    return 3.14*a*a;
}
int main(){
    int pilihan;
    float panjang, lebar;
    float jejari;

do{
    cout << "menu" << endl;
    cout << "1. luas persegi panjang" << endl;
    cout << "2. luas lingkaran" << endl;
    cout << "3. keluar" << endl;

    cout << "pilihan (1/2/3) = ";
    cin >> pilihan;
    switch (pilihan)

{
    case 1:
    cout << "hitung luas persegi panjang" << endl;
    cout << "masukkan panjang = ";
    cin >> panjang;
    cout << "masukkan lebar = ";
    cin >> lebar;
    cout << "luas persegi panjang = " <<luaspersegipanjang(panjang, lebar) << endl;
    break;
    case 2:
    cout << "hitung luas lingkaran" << endl;
    cout << "masukan jari-jari =" ;
    cin >> jejari;
    cout << "luas lingkaran = " <<luasLingkaran(jejari) << endl;
    break;
    case 3:
    break;
    default:
    cout << "pilihan salah, pilihan harus di antara 1-3.";
    break;
}
}while (pilihan != 3);

    
}