#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
cout << "## Program C++ Aplikasi Kasir ##" << endl;
    cout << "==========================" << endl;
    cout << endl;

    const int MAX_BARANG = 10;
    string namaBarang[MAX_BARANG];
    long hargaBarang[MAX_BARANG];
    int jumlahBarang[MAX_BARANG];
    long jumlahTotalBarang;
    long totalHarga = 0;
    long jumlahBayar = 0;

    cout << "# Selamat datang di Mini Market ILKOOM #" << endl;
    cout << endl;
    cout << "Masukkan jumlah barang yang ingin dibeli: ";
    cin >> jumlahTotalBarang;
    cout << endl;

    if (jumlahTotalBarang <= 0 || jumlahTotalBarang > MAX_BARANG) {
        cout << "Jumlah barang tidak valid!" << endl;
        return 0;
    }

    for (int i = 0; i < jumlahTotalBarang; i++) {
        cout << "Barang ke-" << i + 1 << endl;
        cout << "Nama barang : ";
        cin.ignore(); // Membersihkan buffer
        getline(cin, namaBarang[i]);
        cout << "Harga satuan : ";
        cin >> hargaBarang[i];
        cout << "Jumlah " << namaBarang[i] << " yang dibeli: ";
        cin >> jumlahBarang[i];
        cout << endl;
    }
    cout << endl;
