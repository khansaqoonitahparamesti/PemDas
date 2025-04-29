#include <iostream>
#include <string>
using namespace std;

int jumlahbarang ;
char KategoriPelanggan;
float Hargabarang,totalharga, diskon, hargaakhir;
string NamaPelanggan, NomorIdentitas;
 
void input ()
{
    cout<< " Masukkan nama pelanggan =";
    cin >> NamaPelanggan;
    cout<<" Masukkan Nomor Identitas =";
    cin >> NomorIdentitas;
    cout<<"Masukkan Kategori Pelanggan (M/N) =";
    cin >>  KategoriPelanggan;
}
    

void jumlah () 
{
    do {
        cout << "Masukkan Jumlah Barang yang di beli =";
        cin >> jumlahbarang;
        if (jumlahbarang > 10)
        {
            cout << " Maksimal 10 barang per pemblian. Silahkan Masukkan ulang";
        }     
    } while ( jumlahbarang <= 10);
 
} 

int hitungharga ()
{
    cout << "Masukkan Harga Satuan Barang =";
    cin >> Hargabarang;

    totalharga = jumlahbarang*Hargabarang;

    if (KategoriPelanggan == 'M')
    {
        diskon = 0.5* totalharga;
    }
    else
    {
        diskon = 0;
    }

}


int hitunghargaakhir(){
    hargaakhir = totalharga- diskon;
}

void display() {
   cout <<"--- Struk Pembelian Toko Kelontong ---" << endl;
   cout << " Nama Pelanggan = " << NamaPelanggan<<endl;
   cout << " Nomor identitas =" << NomorIdentitas << endl ;
   cout << " Kategori Pelanggan=" << KategoriPelanggan << endl ;
   cout << " jumlah barang =" << jumlahbarang << endl;
   cout << " harga satuan barang =" << Hargabarang << endl ;
   cout << " Total harga=" << totalharga << endl;
   cout<< " diskon =" << diskon << endl ;
   cout << " Harga akhir =" << hargaakhir<<endl;

}

int main (){
    input();
    display ();
} 
