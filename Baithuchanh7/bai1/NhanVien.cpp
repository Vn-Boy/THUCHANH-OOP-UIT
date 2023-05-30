#include "NhanVien.h"
#include <iostream>
NhanVien::NhanVien(string Hoten, string NgaySinh)
{
    this->HoTen = Hoten;
    this->NgaySinh = NgaySinh;
}
NhanVien::NhanVien(){};
void NhanVien::printLuong()
{
    cout << "Luong: " << luong << endl;
    cout << "Ho ten: " << HoTen << endl;
    cout << "Ngay sinh: " << NgaySinh << endl;
}
double NhanVien::getLuong()
{
    return this->luong;
}
void NhanVien::setLuong(int luong)
{
    this->luong = luong;
}