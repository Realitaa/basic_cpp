#include <iostream>
using namespace std;

int main()
{
    int i, k = 1;
    for (i = 0; i < 3; i++)
    {
        cout << k << endl;
        k++;
    }

    // TODO:
    // Buat penjumlahan bilangan yang di loop dan rata-ratanya.
    int startNum = 1;
    int endNum = 10;
    int sum;

    for (i = startNum; i <= endNum; i++)
    {
        sum += i;
    }
    cout << "Summary dari " << startNum << " sampai " << endNum << " adalah " << sum << endl;
    cout << "Rata-rata dari " << startNum << " sampai " << endNum << " adalah " << sum / endNum << endl;

    // TODO:
    // tampilkan angka 1-1000 kemudian hitung berapa banyaka angka yang habis dibagi 3 dan dibagi 7
    int count3 = 0;
    int count7 = 0;
    int count37 = 0;
    for (i = 1; i <= 21; i++)
    {
        cout << i << " ";
        if (i % 3 == 0)
        {
            count3++;
        }

        if (i % 7 == 0)
        {
            count7++;
        }

        if (i % 3 == 0 && i % 7 == 0)
        {
            count37++;
        }
    }

    cout << "\nJumlah angka yang habis dibagi 3 adalah: " << count3 << endl;
    cout << "Jumlah angka yang habis dibagi 7 adalah: " << count7 << endl;
    cout << "Jumlah angka yang habis dibagi 3 dan 7 adalah: " << count37 << endl;
    return 0;
}