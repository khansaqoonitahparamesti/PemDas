#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    string alamat;
};

int main()
{
    // Membuat object struct dalam array
    Mahasiswa mhs[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukan nim = ";
        cin >> mhs[i].nim;
        cout << "Masukan nama = ";
        cin >> mhs[i].nama;
        cout << "Masukan alamat = ";
        cin >> mhs[i].alamat;
    }

    cout << endl
