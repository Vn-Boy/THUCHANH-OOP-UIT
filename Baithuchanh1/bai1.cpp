#include "header.h"
void RutGonPhanSo(int a, int b)
{
    int gcd = __gcd(a, b);
    a = a / gcd;
    b = b / gcd;
    if (a < 0 || b < 0)
    {
        a = -abs(a);
        b = abs(b);
    }
    if (abs(a) == 1 && abs(b) == 1)
        cout << 1 << "\n";
    else if (a == 0 && b != 0)
    {
        cout << 0 << "\n";
    }
    else if (b == 1 && abs(a) != 1)
    {
        cout << a << "\n";
    }
    else
        cout << a << "/" << b << "\n";
}