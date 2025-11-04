#include <iostream>
using namespace std;

int main()
{
    float tugas, uts, uas, nilai;

    cout << "=======================================" << endl;
    cout << "NILAI AKHIR MAHASISWA" << endl;
    cout << "=======================================" << endl;
    cout << "Masukkan nilai tugas anda: ";
    cin >> tugas;
    cout << "Masukkan nilai uts anda: ";
    cin >> uts;
    cout << "Masukkan nilai uas anda: ";
    cin >> uas;

    if (tugas < 0 || tugas > 100 || uts < 0 || uts > 100 || uas < 0 || uas > 100)
    {
        cout << "Nilai anda tidak valid";
    }

    nilai = (0.25 * tugas) + (0.35 * uts) + (0.4 * uas);
    cout << "Nilai akhir anda adalah: " << nilai << " atau ";

    if (nilai >= 85 || nilai <= 100)
    {
        cout << "A";
    }
    else if (nilai >= 70 || nilai <= 84.5)
    {
        cout << "B";
    }
    else if (nilai >= 60 || nilai <= 69.5)
    {
        cout << "C";
    }
    else if (nilai >= 50 || nilai <= 59.5)
    {
        cout << "D";
    }
    else if (nilai < 50)
    {
        cout << "E";
    }
}