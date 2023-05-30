#include "Phanso.h"
#include <iostream>
#include <algorithm>
using namespace std;

Phanso::Phanso()
{
}

Phanso::Phanso(int x1, int y1, int x2, int y2)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

int Phanso::getx1()
{
    return x1;
}
int Phanso::gety1()
{
    return y1;
}
int Phanso::getx2()
{
    return x2;
}
int Phanso::gety2()
{
    return y2;
}
void Phanso::setX1Y1(int x1, int y1)
{
    if (x1 < 0 || y1 < 0)
    {
        this->x1 = -abs(x1);
        this->y1 = abs(y1);
    }
    else
    {
        this->x1 = abs(x1);
        this->y1 = abs(y1);
    }
}
void Phanso::setX2Y2(int x2, int y2)
{
    if (x2 < 0 || y2 < 0)
    {
        this->x2 = -abs(x2);
        this->y2 = abs(y2);
    }
    else
    {
        this->x2 = abs(x2);
        this->y2 = abs(y2);
    }
}
void Phanso::RutGonPhanSo(int a, int b)
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
void Phanso::CongHaiPhanSo()
{
    RutGonPhanSo(this->x1 * this->y2 + this->x2 * this->y1, this->y1 * this->y2);
}
void Phanso::NhanHaiPhanSo()
{
    RutGonPhanSo(this->x1 * this->x2, this->y1 * this->y2);
}
void Phanso::TruHaiPhanSo()
{
    RutGonPhanSo(this->x1 * this->y2 - this->x2 * this->y1, this->y1 * this->y2);
}
void Phanso::ChiaHaiPhanSo()
{
    RutGonPhanSo(this->x1 * this->y2, this->y1 * this->x2);
}
