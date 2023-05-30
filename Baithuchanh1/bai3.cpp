#include "header.h"
#include "bai1.cpp"
int x1, x2, y1, y2;
void setX1Y1(int x1_, int y1_)
{
    if (x1_ < 0 || y1_ < 0)
    {
        x1 = -abs(x1_);
        y1 = abs(y1_);
    }
    else
    {
        x1 = abs(x1_);
        y1 = abs(y1_);
    }
}
void setX2Y2(int x2_, int y2_)
{
    if (x2_ < 0 || y2_ < 0)
    {
        x2 = -abs(x2_);
        y2 = abs(y2_);
    }
    else
    {
        x2 = abs(x2_);
        y2 = abs(y2_);
    }
}
void CongHaiPhanSo()
{
    RutGonPhanSo(x1 * y2 + x2 * y1, y1 * y2);
}
void NhanHaiPhanSo()
{
    RutGonPhanSo(x1 * x2, y1 * y2);
}
void TruHaiPhanSo()
{
    RutGonPhanSo(x1 * y2 - x2 * y1, y1 * y2);
}
void ChiaHaiPhanSo()
{
    RutGonPhanSo(x1 * y2, y1 * x2);
}