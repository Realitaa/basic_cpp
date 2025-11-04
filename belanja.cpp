#include <iostream>
using namespace std;

int main()
{
    int barang, subtotal, diskon, total;
    cout << "==========================" << endl;
    cout << "PILIH BARANG BELANJA" << endl;
    cout << "==========================" << endl;
    cout << "1. Keyboard      Rp 399000" << endl;
    cout << "2. Mouse         Rp 49000" << endl;
    cout << "3. Monitor       Rp 1490000" << endl;
    cout << "4. Headphone     Rp 119000" << endl;
    cout << "==========================" << endl;
    cout << "Pilih barang: ";
    cin >> barang;

    switch (barang)
    {
    case 1:
        subtotal = 399000;
        break;
    case 2:
        subtotal = 49000;
        break;
    case 3:
        subtotal = 1490000;
        break;
    case 4:
        subtotal = 119000;
        break;
    default:
        cout << "Barang tidak tersedia";
        return 0;
    }

    if (subtotal > 300000)
    {
        diskon = subtotal * 0.15;
    }
    else if (subtotal > 100000)
    {
        diskon = subtotal * 0.1;
    }
    else
    {
        diskon = 0;
    }

    total = subtotal - diskon;

    cout << "-------Struk Belanja--------" << endl;
    cout << "Subtotal:      Rp " << subtotal << endl;
    cout << "Diskon:        Rp " << diskon << endl;
    cout << "Total:         Rp " << total << endl;
    cout << "----------------------------" << endl;
    cout << "Terima kasih sudah berbelanja";

    return 0;
}