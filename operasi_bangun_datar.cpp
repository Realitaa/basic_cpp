// TODO:
// Membuat menu untuk operasi bangun datar dan bangun ruang

#include <iostream>
#include <math.h>
using namespace std;

int menu()
{
    int menu;
    cout << "Aplikasi Menghitung Bangun Datar" << endl;
    cout << "================================" << endl;
    cout << "Bangun Datar" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "5. Belah Ketupat" << endl;
    cout << "6. Layang-layang" << endl;
    cout << "7. Jajar Genjang" << endl;
    cout << "8. Trapesium" << endl;
    cout << "9. Keluar" << endl;
    cout << "Pilih operasi: ";
    cin >> menu;

    return menu;
}

void operation(int main)
{
    // int main = menu();
    switch (main)
    {
    case 1:
        cout << "Masukkan sisi persegi: ";
        double sisi;
        cin >> sisi;
        cout << "Luas persegi adalah: " << sisi * sisi << endl;
        break;

    case 2:
        cout << "Masukkan panjang persegi panjang: ";
        int panjang;
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        int lebar;
        cin >> lebar;
        cout << "Luas persegi panjang adalah: " << panjang * lebar << endl;
        break;

    case 3:
        cout << "Masukkan alas segitiga: ";
        int alas, tinggi;
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;
        cout << "Luas segitiga adalah: " << 0.5 * alas * tinggi << endl;
        break;

    case 4:
        cout << "Masukkan jari-jari lingkaran: ";
        int jari;
        cin >> jari;
        cout << "Luas lingkaran adalah: " << 3.14 * jari * jari << endl;
        break;

    case 5:
        cout << "Masukkan diagonal utama belah ketupat: ";
        int diagonal_utama;
        cin >> diagonal_utama;
        cout << "Masukkan diagonal kedua belah ketupat: ";
        int diagonal_kedua;
        cin >> diagonal_kedua;
        cout << "Luas belah ketupat adalah: " << 0.5 * diagonal_utama * diagonal_kedua << endl;
        break;

    case 6:
        cout << "Masukkan panjang diagonal utama layang-layang: ";
        int diagonal_utama_layang;
        cin >> diagonal_utama_layang;
        cout << "Masukkan panjang diagonal kedua layang-layang: ";
        int diagonal_kedua_layang;
        cin >> diagonal_kedua_layang;
        cout << "Luas layang-layang adalah: " << 0.5 * diagonal_utama_layang * diagonal_kedua_layang << endl;
        break;

    case 7:
        cout << "Masukkan alas jajar genjang: ";
        int alas_jajar;
        cin >> alas_jajar;
        cout << "Masukkan tinggi jajar genjang: ";
        int tinggi_jajar;
        cin >> tinggi_jajar;
        cout << "Luas jajar genjang adalah: " << alas_jajar * tinggi_jajar << endl;
        break;

    case 8:
        cout << "Masukkan alas trapesium: ";
        int alas_trapesium;
        cin >> alas_trapesium;
        cout << "Masukkan tinggi trapesium: ";
        int tinggi_trapesium;
        cin >> tinggi_trapesium;
        cout << "Masukkan sisi atas trapesium: ";
        int sisi_atas_trapesium;
        cin >> sisi_atas_trapesium;
        cout << "Masukkan sisi bawah trapesium: ";
        int sisi_bawah_trapesium;
        cin >> sisi_bawah_trapesium;
        cout << "Luas trapesium adalah: " << 0.5 * (sisi_atas_trapesium + sisi_bawah_trapesium) * tinggi_trapesium << endl;
        break;

    case 9:
        cout << "Terima kasih telah menggunakan aplikasi ini" << endl;
        break;

    default:
        break;
    }
}

int main()
{
    int choice = menu();
    while (choice != 9)
    {
        operation(choice);
        choice = menu();
    }
    cout << "Terima kasih telah menggunakan aplikasi ini" << endl;
    return 0;
}