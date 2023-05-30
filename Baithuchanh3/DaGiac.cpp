#include "DaGiac.h"
#include <iostream>
using namespace std;

#define RADIANT 3.14159 / 180;

DaGiac::DaGiac()
{
}

DaGiac::~DaGiac()
{
}

void DaGiac::NhapDiem()
{
    cout << "Nhap so diem\n";
    cin >> this->n;
    for (int i = 0; i < this->n; i++)
    {
        Point sample;
        cout << "Nhap toa do thu" << i + 1;
        sample.input();
        this->Dagiac.push_back(sample);
    }
}

void DaGiac::Xuat()
{
    for (int i = 0; i < this->n; i++)
    {
        cout << "Toa do thu " << i + 1 << "\n";
        Dagiac[i].output();
    }
}

void DaGiac::TinhTien(double x, double y)
{
    for (int i = 0; i < this->n; i++)
    {
        Dagiac[i].TinhTien(x, y);
    }
}

void DaGiac::quayDaGiac(double deg)
{
    deg = deg * RADIANT;
    for (int i = 0; i < this->n; i++)
    {
        Dagiac[i].quay(deg);
    }
}

void DaGiac::phongToDaGiac(double k)
{
    for (int i = 0; i < this->n; i++)
    {
        Dagiac[i].PhongTo(k);
    }
}

void DaGiac::thuNhoDaGiac(double k)
{
    for (int i = 0; i < this->n; i++)
    {
        Dagiac[i].ThuNho(k);
    }
}

void DaGiac::XuatDagiac()
{
    for (int i = 0; i < this->n; i++)
    {
        cout << "Toa Do dinh thu " << i + 1 << "\n";
        Dagiac[i].output();
    }
}
