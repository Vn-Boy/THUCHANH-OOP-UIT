#ifndef DAGIAC_H
#define DAGIAC_H

#include <vector>
#include "Point.h"

class DaGiac
{
private:
    vector<Point> Dagiac;
    int n;

public:
    DaGiac();
    ~DaGiac();
    void NhapDiem();
    void Xuat();
    void TinhTien(double x, double y);
    void quayDaGiac(double deg);
    void phongToDaGiac(double k);
    void thuNhoDaGiac(double k);
    void XuatDagiac();
};

#endif
