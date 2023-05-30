#ifndef TAMGIAC_H
#define TAMGIAC_H

#include "Point.h"

class TamGiac
{
private:
    Point A;
    Point B;
    Point C;

public:
    TamGiac();
    ~TamGiac();
    void setXYZ();
    void tinhTienToaDo();
    void Quay(double deg);
    void ThuNhoTamGiac(double k);
    void PhongToTamGiac(double k);
    void Xuat();
};

#endif
