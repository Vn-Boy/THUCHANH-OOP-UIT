#include <iostream>
#include <vector>
#include "bai1.h"
#define RADIANT 3.14159 / 180;
using namespace std;
class DaGiac
{
private:
    vector<Point> Dagiac;
    int n;

public:
    DaGiac()
    {
    }
    ~DaGiac() {}
    void NhapDiem()
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

    void Xuat()
    {
        for (int i = 0; i < this->n; i++)
        {
            cout << "Toa do thu " << i + 1 << "\n";
            Dagiac[i].output();
        }
    }
    void TinhTien(double x, double y)
    {
        for (int i = 0; i < this->n; i++)
        {
            Dagiac[i].TinhTien(x, y);
        }
    }
    void quayDaGiac(double deg)
    {
        deg = deg * RADIANT;
        for (int i = 0; i < this->n; i++)
        {
            Dagiac[i].quay(deg);
        }
    };
    void phongToDaGiac(double k)
    {
        for (int i = 0; i < this->n; i++)
        {
            Dagiac[i].PhongTo(k);
        }
    }
    void thuNhoDaGiac(double k)
    {
        for (int i = 0; i < this->n; i++)
        {
            Dagiac[i].ThuNho(k);
        }
    }
    void XuatDagiac()
    {
        for (int i = 0; i < this->n; i++)
        {
            cout << "Toa Do dinh thu " << i + 1 << "\n";
            Dagiac[i].output();
        }
    }
};