#include <iostream>
using namespace std;

int main()
{
    int arr_length = 5;
    int smallest;
    int arr[arr_length];

    for (int i = 0; i < arr_length; i++)
    {
        cout << "Masukkan nilai ke - " << i << " : ";
        cin >> arr[i];
    }

    smallest = arr[0];

    for (int i = 0; i < arr_length; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "Nilai terkecil adalah : " << smallest;
    return 0;
}