#include "header.h"
struct PhanSo
{
    int tuSo;
    int mauSo;
};
void PhanSoLonNhat()
{
    PhanSo A;
    PhanSo B;
    cout << "Nhap phan so thu 1\n";
    cin >> A.tuSo >> A.mauSo;
    cout << "Nhap phan so thu 2\n";
    cin >> B.tuSo >> B.mauSo;
    if (A.mauSo == B.mauSo)
        cout << "Phan So Lon Nhat là" << max(A.tuSo, B.tuSo) << "/" << A.tuSo << "\n";
}
