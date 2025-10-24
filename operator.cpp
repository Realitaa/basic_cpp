#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "Input bilangan pertama: ";
    cin >> a;
    cout << "Input bilangan kedua: ";
    cin >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " mod " << b << " = " << (int)a % (int)b << endl;
    return 0;
}