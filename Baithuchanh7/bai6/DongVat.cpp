#include "DongVat.h"
#include <iostream>
#include <cstdlib>
DongVat::DongVat()
{
}
DongVat::DongVat(bool sinhcon, int soluongloai, string tiengkeu, bool ChoSua)
{
    this->sinhCon = sinhcon;
    this->soluongloai = soluongloai;
    this->tiengkeu = tiengkeu;
    this->ChoSua = ChoSua;
}
void DongVat::setHungry(bool hungry)
{
    this->hungry = hungry;
}
bool DongVat::getHungry()
{
    return this->hungry;
}
void DongVat::setSolitsua(int solitsua)
{
    this->solitsua = solitsua;
}
int DongVat::getSolitsua()
{
    return this->solitsua;
}
bool DongVat::getSinhCon()
{
    return this->sinhCon;
}
int DongVat::randomLitSua(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}
void DongVat::printTiengKeu()
{
    cout << "Tieng keu: " << this->getTiengKeu() << endl;
};
string DongVat::getTiengKeu()
{
    return this->tiengkeu;
}
void DongVat::chosua()
{
    string text = this->ChoSua ? "co" : "khong";
    cout << "Dong vat nay " << text << " sua\n";
};
void DongVat::soluong()
{
    cout << "So luong cua loai la " << this->soluongloai << endl;
}