#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;

class KhachHang
{
protected:
    string ten;
    int soLuongHang;
    int donGiaHang;

public:
    string getTen();
    virtual void nhap(istream &in);
    virtual double tinhTien() = 0;
};

class KhachHangA : public KhachHang
{
public:
    void nhap(istream &in);
    double tinhTien();
};

class KhachHangB : public KhachHang
{
private:
    int soNamThanThiet;

public:
    void nhap(istream &in);
    double tinhTien();
};

class KhachHangC : public KhachHang
{
public:
    void nhap(istream &in);
    double tinhTien();
};

#endif
