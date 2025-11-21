#include <iostream>
using namespace std;

int main()
{
    int x = 1, y = 1;
    while (x <= 10)
    {
        while (y <= 10)
        {
            cout << y << " ";
            y++;
        }
        cout << endl;
        y = 1;
        x++;
    }
    return 0;
}