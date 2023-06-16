#include "NhanVien.h"
void NhanVien::Nhap()
{
    cout << "So dien thoai\n";
    cin >> this->sdt;
    cin.ignore();
    cout << "Nhap ho ten\n";
    getline(cin, this->HoTen);
    cout << "Nhap maso\n";
    getline(cin, this->MaNhanVien);
    cout << "Nhap luong co ban\n";
    cin >> this->Luongcoban;
    cout << "Nhap tuoi\n";
    cin >> this->age;
}
void NhanVien::Xuat()
{
    cout << this->age << endl;
    cout << this->HoTen << endl;
    cout << this->sdt << endl;
    cout << this->MaNhanVien << endl;
    cout << this->Luongcoban << endl;
}
double NhanVien::getLuongCoban()
{
    return this->Luongcoban;
}
void LapTrinhVien::Nhap()
{
    NhanVien::Nhap();
    cout << "So gio lam\n";
    cin >> this->SoGioOvertime;
}
void LapTrinhVien::Xuat()
{
    NhanVien::Xuat();
    cout << this->SoGioOvertime << endl;
}
double LapTrinhVien::TinhLuong()
{
    return this->getLuongCoban() + this->SoGioOvertime * 200000;
}
void KiemChungVien::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap So loi tim duoc\n";
    cin >> this->soloiphathien;
}
void KiemChungVien::Xuat()
{
    NhanVien::Xuat();
    cout << this->soloiphathien << endl;
}
double KiemChungVien::TinhLuong()
{
    return this->getLuongCoban() + this->soloiphathien * 50000;
}