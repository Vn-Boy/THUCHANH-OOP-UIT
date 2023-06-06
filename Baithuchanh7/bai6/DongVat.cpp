
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class DongVat
{
protected:
    int soLuong;
    int soCon;
    int soLitSua;
    string tiengKeu;

public:
    DongVat()
    {
        soLuong = 0;
        soCon = 0;
        soLitSua = 0;
    }
    virtual void SinhCon() = 0;
    virtual void ChoSua() = 0;
    virtual void Keu() = 0;
};