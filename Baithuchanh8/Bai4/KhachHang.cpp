#include "KhachHang.h"

void KhachHang::nhap(istream &in)
{
    in >> ten >> soLuongHang >> donGiaHang;
}
string KhachHang::getTen()
{
    return ten;
}

void KhachHangA::nhap(istream &in)
{
    KhachHang::nhap(in);
}
double KhachHangA::tinhTien()
{
    return soLuongHang * donGiaHang * 1.1;
}
void KhachHangB::nhap(istream &in)
{
    KhachHang::nhap(in);
    in >> soNamThanThiet;
}

double KhachHangB::tinhTien()
{
    double phanTramKhuyenMai = min(soNamThanThiet * 0.05, 0.5);
    return (soLuongHang * donGiaHang) * (1 - phanTramKhuyenMai) * 1.1;
}

void KhachHangC::nhap(istream &in)
{
    KhachHang::nhap(in);
}

double KhachHangC::tinhTien()
{
    return (soLuongHang * donGiaHang) * 0.5 * 1.1;
}
