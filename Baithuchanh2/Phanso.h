#ifndef PHANSO_H
#define PHANSO_H
class Phanso
{
private:
    int x1, x2, y1, y2;

public:
    Phanso();
    Phanso(int x1, int y1, int x2, int y2);
    int getx1();
    int gety1();
    int getx2();
    int gety2();
    void setX1Y1(int x1, int y1);
    void setX2Y2(int x2, int y2);
    void RutGonPhanSo(int a, int b);
    void CongHaiPhanSo();
    void NhanHaiPhanSo();
    void TruHaiPhanSo();
    void ChiaHaiPhanSo();
};

#endif
