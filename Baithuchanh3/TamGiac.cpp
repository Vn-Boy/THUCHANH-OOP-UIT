#include "TamGiac.h"
#include <iostream>
using namespace std;

#define RADIANT 3.14159 / 180;

TamGiac::TamGiac()
{
    cout << "Ham da duoc tao";
}

TamGiac::~TamGiac()
{
    cout << "Ham da duoc huy";
}

void TamGiac::setXYZ()
{
    cout << "Nhap toa do A\n";
    this->A.input();
    cout << "Nhap toa do B\n";
    this->B.input();
    cout << "Nhap toa do X\n";
    this->C.input();
}

void TamGiac::tinhTienToaDo()
{
    cout << "Ban can tinh tien toa do cua dinh nao?\n";
    char choice;
    cin >> choice;
    toupper(choice);
    switch (choice)
    {
    case 'A':
        cout << "Nhap can tinh tien x bao nhieu va y bao nhieu";
        int x, y;
        cin >> x >> y;
        this->A.TinhTien(x, y);
        break;
    case 'B':
        cout << "Nhap can tinh tien x bao nhieu va y bao nhieu";
        int x, y;
        cin >> x >> y;
        this->B.TinhTien(x, y);
        break;
    case 'C':
        cout << "Nhap can tinh tien x bao nhieu va y bao nhieu";
        int x, y;
        cin >> x >> y;
        this->C.TinhTien(x, y);
        break;
    default:
        break;
    }
}

void TamGiac::Quay(double deg)
{
    cout << "Ban muon quay 1 goc bao nhieu\n";
    deg = deg * RADIANT;
    this->A.TinhTien(this->A.getX() * cos(deg) - this->A.getY() * sin(deg), this->A.getX() * sin(deg) + this->A.getY() * cos(deg));
    this->B.TinhTien(this->B.getX() * cos(deg) - this->B.getY() * sin(deg), this->B.getX() * sin(deg) + this->B.getY() * cos(deg));
    this->C.TinhTien(this->C.getX() * cos(deg) - this->C.getY() * sin(deg), this->C.getX() * sin(deg) + this->C.getY() * cos(deg));
}

void TamGiac::ThuNhoTamGiac(double k)
{
    this->A.ThuNho(k);
    this->B.ThuNho(k);
    this->C.ThuNho(k);
}

void TamGiac::PhongToTamGiac(double k)
{
    this->A.PhongTo(k);
    this->B.PhongTo(k);
    this->C.PhongTo(k);
}

void TamGiac::Xuat()
{
    cout << "Toa do A\n";
    this->A.output();
    cout << "Toa do B\n";
    this->B.output();
    cout << "Toa do C\n";
    this->C.output();
}
