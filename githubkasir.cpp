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
cout << "###---------------------------------------###" << endl;
    cout << "        Struk Mini Market ILKOOM           " << endl;
    cout << "###---------------------------------------###" << endl;
    cout << "No Barang      Jumlah  Harga Satuan  Sub Total" << endl;

    for (int i = 0; i < jumlahTotalBarang; i++) {
        cout << left << setw(12) << namaBarang[i];
        cout << right << setw(4) << jumlahBarang[i];
        cout << setw(8) << hargaBarang[i];
        cout << setw(15) << jumlahBarang[i] * hargaBarang[i];
        cout << endl;
        totalHarga += (jumlahBarang[i] * hargaBarang[i]);
    }

    cout << "---------------------------------------------" << endl;
    cout << "Total harga : Rp. " << totalHarga << endl << endl;

    do {
        cout << "Jumlah Bayar: Rp. ";
        cin >> jumlahBayar;
        cout << endl;

        if (jumlahBayar < totalHarga) {
            cout << "Maaf, uang anda kurang. Mohon lakukan ulang pembayaran" << endl;
        }
    } while (jumlahBayar < totalHarga);

    cout << "Kembalian    : Rp." << jumlahBayar - totalHarga << endl;
    cout << endl;
    cout << "####-----------------------------------------------####" << endl;
    cout << "####   Terimakasih sudah berbelanja, datang kembali  ####" << endl;
    cout << "####-----------------------------------------------####" << endl;

    return 0;
}
