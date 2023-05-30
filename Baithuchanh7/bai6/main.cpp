#include "DongVat.cpp"
#include <vector>
class Bo : public DongVat
{
public:
    Bo(bool sinhcon, int soluongloai, string tiengkeu, bool ChoSua, int minLitSua, int maxLitSua) : DongVat(sinhcon, soluongloai, tiengkeu, ChoSua)
    {
        setSolitsua(randomLitSua(minLitSua, maxLitSua));
    };
    void printTiengKeu()
    {
        cout << "Tieng keu cua con Bo\n";
        DongVat::printTiengKeu();
    }
    void chosua()
    {
        cout << "Con bo\n";
        DongVat::chosua();
    }
    void soluong()
    {
        DongVat::soluong();
    }
};
class De : public DongVat
{
public:
    De(bool sinhcon, int soluongloai, string tiengkeu, bool ChoSua, int minLitSua, int maxLitSua) : DongVat(sinhcon, soluongloai, tiengkeu, ChoSua)
    {
        setSolitsua(randomLitSua(minLitSua, maxLitSua));
    };
    void printTiengKeu()
    {
        cout << "Tieng keu cua con De\n";
        DongVat::printTiengKeu();
    }
    void chosua()
    {
        cout << "Con de\n";
        DongVat::chosua();
    }
    void soluong()
    {
        DongVat::soluong();
    }
};
class Cuu : public DongVat
{
public:
    Cuu(bool sinhcon, int soluongloai, string tiengkeu, bool ChoSua, int minLitSua, int maxLitSua) : DongVat(sinhcon, soluongloai, tiengkeu, ChoSua)
    {
        setSolitsua(randomLitSua(minLitSua, maxLitSua));
    };
    void printTiengKeu()
    {
        cout << "Tieng keu cua con Cuu\n";
        DongVat::printTiengKeu();
    }
    void chosua()
    {
        cout << "Con cuu\n";
        DongVat::chosua();
    }
    void soluong()
    {
        DongVat::soluong();
    }
};
class QuanLyDongVat
{
private:
    int soluongloai;

public:
    vector<DongVat *> dongvat;
    QuanLyDongVat(int soluongloai) : soluongloai(soluongloai)
    {
        dongvat.resize(soluongloai);
    }
    void XuatThongTin()
    {
        for (int i = 0; i < soluongloai; i++)
        {
            dongvat[i]->printTiengKeu();
            dongvat[i]->chosua();
            dongvat[i]->soluong();
        }
    }
};
int main()
{
    QuanLyDongVat quanly(3);
    quanly.dongvat[0] = new Bo(true, 10, "Moo", true, 0, 20);
    quanly.dongvat[1] = new De(true, 20, "Meh", true, 0, 10);
    quanly.dongvat[2] = new Cuu(true, 30, "Baa", true, 0, 5);
    quanly.XuatThongTin();
}