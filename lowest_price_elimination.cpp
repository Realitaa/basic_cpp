#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Masukkan angka ketiga: ";
    cin >> c;

    // Simpan dalam array agar mudah diurutkan
    double arr[3] = {a, b, c};

    // Urutkan dari yang kecil ke besar
    sort(arr, arr + 3);

    // Dua nilai tertinggi ada di posisi terakhir
    double hasil = arr[1] + arr[2];

    cout << "Jumlah dua nilai tertinggi adalah: " << hasil << endl;

    return 0;
}
