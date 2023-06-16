#include "DongVat.h"
#include <vector>

int generateRandom(int n)
{
    return rand() % n;
}
class Bo : public DongVat
{
public:
    Bo(int sl)
    {
        soLuong = sl;
        tiengKeu = "Bo bo";
    }
    void SinhCon()
    {
        for (int i = 0; i < soLuong; i++)
        {
            soCon += generateRandom(10) + 1;
        }
        cout << "So luong con cua con bo la " << soCon << "\n";
    }
    void ChoSua()
    {
        for (int i = 0; i < soLuong; i++)
        {
            soLitSua += generateRandom(21);
        }
        cout << "SO lit sua cho bu la " << soLitSua << "\n";
    }
    void Keu()
    {
        cout << tiengKeu << endl;
    }
};

class Cuu : public DongVat
{
public:
    Cuu(int sl)
    {
        soLuong = sl;
        tiengKeu = "Beee";
    }
    void SinhCon()
    {
        for (int i = 0; i < soLuong; i++)
        {
            soCon += generateRandom(10) + 1;
        }
        cout << "So luong con cua con cuu la " << soCon << "\n";
    }
    void ChoSua()
    {
        for (int i = 0; i < soLuong; i++)
        {
            soLitSua += generateRandom(6);
        }
        cout << "SO lit sua cho bu la " << soLitSua << "\n";
    }
    void Keu()
    {
        cout << tiengKeu << endl;
    }
};

class De : public DongVat
{
public:
    De(){};
    De(int sl)
    {
        soLuong = sl;
        tiengKeu = "Meee";
    }
    void SinhCon()
    {
        for (int i = 0; i < soLuong; i++)
        {
            soCon += generateRandom(10) + 1;
        }
        cout << "So luong con cua con de la " << soCon << "\n";
    }
    void ChoSua()
    {
        for (int i = 0; i < soLuong; i++)
        {
            soLitSua += generateRandom(11);
        }
        cout << "SO lit sua cho bu la " << soLitSua << "\n";
    }
    void Keu()
    {
        cout << tiengKeu << endl;
    }
};
class NongTrai
{
private:
    DongVat *giasuc[3];

public:
    NongTrai() {}
    void NhapSoLuongGiaSuc()
    {
        int slBo, slCuu, slDe;
        cout << "Nhap so luong bo: ";
        cin >> slBo;
        cout << "Nhap so luong cuu: ";
        cin >> slCuu;
        cout << "Nhap so luong de: ";
        cin >> slDe;
        giasuc[0] = new Bo(slBo);
        giasuc[1] = new Cuu(slCuu);
        giasuc[2] = new De(slDe);
    }
    void TiengKeuKhiDoi()
    {
        cout << "Tieng keu khi doi: \n";
        for (int i = 0; i < 3; i++)
        {
            giasuc[i]->Keu();
        }
    }
    void ThongKeSauMotLuaSinhVaMotLuotChoSua()
    {
        cout << "Thong ke sau mot lua sinh va mot lua cho sua: \n";
        for (int i = 0; i < 3; i++)
        {
            giasuc[i]->SinhCon();
            giasuc[i]->ChoSua();
        }
    }
};

int main()
{
    srand(time(0));
    // cách dùng không liên kết động
    int slBo, slCuu, slDe;
    cout << "Nhap so luong bo: ";
    cin >> slBo;
    cout << "Nhap so luong cuu: ";
    cin >> slCuu;
    cout << "Nhap so luong de: ";
    cin >> slDe;
    Bo bo(slBo);
    Cuu cuu(slCuu);
    De de(slDe);
    bo.Keu();
    cuu.Keu();
    de.Keu();
    bo.SinhCon();
    bo.ChoSua();
    cuu.SinhCon();
    cuu.ChoSua();
    de.SinhCon();
    de.ChoSua();
    // cách dùng liên kết động

    NongTrai nongTrai;
    nongTrai.NhapSoLuongGiaSuc();
    nongTrai.TiengKeuKhiDoi();
    nongTrai.ThongKeSauMotLuaSinhVaMotLuotChoSua();
}
// dùng liên kết động sẽ giảm tải việc khó khăn viết code từng phương thức cho các lớp con qua đo thể hiện rõ được tính đa hình của oop