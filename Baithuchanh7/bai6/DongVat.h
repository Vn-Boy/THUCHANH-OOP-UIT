#ifndef DONGVAT_H
#define DONGVAT_H
#include <string>
using namespace std;
class DongVat
{
private:
    bool sinhCon;
    bool ChoSua;
    int soluongloai;
    int solitsua;
    bool hungry;
    string tiengkeu;

public:
    DongVat(bool sinhcon, int soluongloai, string tiengkeu, bool ChoSua);
    DongVat();
    void setHungry(bool hungry);
    bool getHungry();
    string getTiengKeu();
    void setSolitsua(int solitsua);
    int getSolitsua();
    bool getSinhCon();
    int randomLitSua(int min, int max);
    virtual void printTiengKeu() = 0;
    virtual void chosua() = 0;
    virtual void soluong() = 0;
};

#endif