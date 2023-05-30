#ifndef SOPHUC_H
#define SOPHUC_H

class SoPhuc
{
private:
    int a1, a2, b1, b2;

public:
    SoPhuc();
    SoPhuc(int a1, int a2, int b1, int b2);
    void getA1A2(int a1, int a2);
    void getB1B2(int b1, int b2);
    void RutGonSoPhuc(int a, int b, int c, int d);
    void CongHaiSoPhuc();
    void TruHaiSoPhuc();
    void NhanHaiSoPhuc();
    void ChiaHaiSoPhuc();
};

#endif
