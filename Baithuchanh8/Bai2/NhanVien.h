#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <iostream>
#include <string>
using namespace std;
class NhanVien
{
private:
    string HoTen;
    string MaNhanVien;
    int age;
    int sdt;
    double Luongcoban;

public:
    virtual void Nhap();
    virtual void Xuat();
    double getLuongCoban();
    virtual double TinhLuong() = 0;
};
class LapTrinhVien : public NhanVien
{
private:
    int SoGioOvertime;

public:
    void Nhap();
    void Xuat();
    double TinhLuong();
};
class KiemChungVien : public NhanVien
{
private:
    int soloiphathien;

public:
    void Nhap();
    void Xuat();
    double TinhLuong();
};
#endif