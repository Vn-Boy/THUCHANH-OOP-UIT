#ifndef SINHVIENUIT_H
#define SINHVIENUIT_H

#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
protected:
    string maSo;
    string hoTen;
    string diaChi;
    int tongSoTinChi;
    double diemTrungBinh;

public:
    int loai;
    virtual void nhap();
    virtual void xuat();
    virtual bool duDieuKienTotNghiep() = 0;
    double layDiemTrungBinh();
};

class SinhVienCaoDang : public SinhVien
{
private:
    double diemThiTotNghiep;

public:
    void nhap();
    void xuat();
    bool duDieuKienTotNghiep();
};

class SinhVienDaiHoc : public SinhVien
{
private:
    string tenLuanVan;
    double diemLuanVan;
public:
    void nhap();
    void xuat();
    bool duDieuKienTotNghiep();
};

#endif
