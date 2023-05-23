#include "PhanSo.h"
#include "algorithm"
PhanSo::PhanSo()
{
    mauso = 1;
}
PhanSo::~PhanSo()
{
}
bool PhanSo::operator!=(const PhanSo &a)
{
    return tuso / mauso != a.tuso / a.mauso;
}
bool PhanSo::operator==(const PhanSo &a)
{
    return tuso / mauso == a.tuso / a.mauso;
}
bool PhanSo::operator>(const PhanSo &a)
{
    return tuso / mauso > a.tuso / a.mauso;
}
bool PhanSo::operator<(const PhanSo &a)
{
    return tuso / mauso < a.tuso / a.mauso;
}
bool PhanSo::operator>=(const PhanSo &a)
{
    return tuso / mauso >= a.tuso / a.mauso;
}
bool PhanSo::operator<=(const PhanSo &a)
{
    return tuso / mauso <= a.tuso / a.mauso;
}
void PhanSo::Toigian(PhanSo &a)
{
    double gcd = __gcd(a.tuso, a.mauso);
    a.tuso /= gcd;
    a.mauso /= gcd;
}
PhanSo PhanSo::operator+(const PhanSo &a)
{
    PhanSo result;
    result.tuso = tuso * a.mauso + a.tuso * mauso;
    result.mauso = mauso * a.mauso;
    Toigian(result);
    return result;
}
PhanSo PhanSo::operator-(const PhanSo &a)
{
    PhanSo result;
    result.tuso = tuso * a.mauso - a.tuso * mauso;
    result.mauso = mauso * a.mauso;
    Toigian(result);
    return result;
}
PhanSo PhanSo::operator*(const PhanSo &a)
{
    PhanSo result;
    result.tuso = tuso * a.tuso;
    result.mauso = mauso * a.mauso;
    Toigian(result);
    return result;
}
PhanSo PhanSo::operator/(const PhanSo &a)
{
    PhanSo result;
    result.tuso = tuso * a.mauso;
    result.mauso = mauso * a.tuso;
    Toigian(result);
    return result;
}
ostream &operator<<(ostream &os, const PhanSo &a)
{
    os << a.tuso << "/" << a.mauso;
    return os;
}

istream &operator>>(istream &is, PhanSo &a)
{

    is >> a.tuso;
    return is;
}