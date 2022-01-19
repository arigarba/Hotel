/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string nama, nama_kamar, kategori, souvenir;
  char kode_kamar, kode_kelas;
  int lama_nginap,biaya_sewa, biaya_adm, total_biaya, harga;
    cout << "    HOTEL CEMPAKA " << endl;
    cout << "___________________________________" << endl;
    cout << " Nama Penyewa  : ";
    cin >> nama;
    cout << "Kode Kamar [J/C/S] : ";
    cin >> kode_kamar;
    cout << "Kode Kelas [1/2/3] : ";
    cin >> kode_kelas;
    cout << "nama kamar : ";
    cin >> nama_kamar;
    cout << "Lama Menginap  : ";
    cin >> lama_nginap;
    cout << "___________________________________" << endl;
    if ((kode_kamar == 'J') && (kode_kelas == '1'))
        nama_kamar = "Jepun";
        kategori = "VIP";
        harga = 350000;
    if ((kode_kamar == 'J') && (kode_kelas == '2'))
        nama_kamar = "Jepun";
        kategori = "Kelas 1";
        harga = 250000;
    if ((kode_kamar == 'J') && (kode_kelas == '3'))
        nama_kamar = "Jepun";
        kategori = "Kelas 2";
        harga = 150000;
    if ((kode_kamar == 'C') && (kode_kelas == '1'))
        nama_kamar = "Cempaka";
        kategori = "VIP";
        harga = 500000;
    if ((kode_kamar == 'C') && (kode_kelas == '2'))
        nama_kamar = "Cempaka";
        kategori = "Kelas 1";
        harga = 400000;
    if ((kode_kamar == 'C') && (kode_kelas == '3'))
        nama_kamar = "Cempaka";
        kategori = "Kelas 2";
        harga = 300000;
    if ((kode_kamar == 'S') && (kode_kelas == '1'))
        nama_kamar = "Sandat";
        kategori = "VIP";
        harga = 1000000;
    if ((kode_kamar == 'S') && (kode_kelas == '2'))
        nama_kamar = "Sandat";
        kategori = "Kelas 1";
        harga = 750000;
    if ((kode_kamar == 'S') && (kode_kelas == '3'))
        nama_kamar = "Sandat";
        kategori = "Kelas 2";
        harga = 650000;
    if (lama_nginap > 7){
      souvenir = "Free Launch";
    }
  biaya_sewa = harga * lama_nginap;
  biaya_adm = 7000;
  total_biaya = biaya_sewa + biaya_adm;
    cout << "      HOTEL CEMPAKA " << endl;
    cout << "____________________________________" << endl;
    cout << "Nama Penyewa           : " << nama << endl;
    cout << "nama Kamar             : " << nama_kamar << endl;
    cout << "Kategori               : " << kategori << endl;
    cout << "Lama Menginap          : " << lama_nginap << " Hari" << endl;
    cout << "Biaya Sewa             :Rp. " << biaya_sewa << endl;
    cout << "Biaya Administrasi     :Rp. " << biaya_adm << endl;
    cout << "Total Biaya Sewa       :Rp. " << total_biaya << endl;
    cout << "_______________________________" << endl;
    cout << "Souvenir  : " << souvenir << endl;

    return 0;
}
