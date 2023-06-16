#include "SinhVienUIT.h"

void SinhVien::nhap()
{
    cout << "Nhap ma so: ";
    cin >> maSo;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
    cout << "Nhap tong so tin chi: ";
    cin >> tongSoTinChi;
    cout << "Nhap diem trung binh: ";
    cin >> diemTrungBinh;
}

void SinhVien::xuat()
{
    cout << "Ma so: " << maSo << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Dia chi: " << diaChi << endl;
    cout << "Tong so tin chi: " << tongSoTinChi << endl;
    cout << "Diem trung binh: " << diemTrungBinh << endl;
}

double SinhVien::layDiemTrungBinh()
{
    return diemTrungBinh;
}

void SinhVienCaoDang::nhap()
{
    SinhVien::nhap();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> diemThiTotNghiep;
}

void SinhVienCaoDang::xuat()
{
    SinhVien::xuat();
    cout << "Diem thi tot nghiep: " << diemThiTotNghiep << endl;
}

bool SinhVienCaoDang::duDieuKienTotNghiep()
{
    if (tongSoTinChi >= 120 && diemTrungBinh >= 5 && diemThiTotNghiep >= 5)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void SinhVienDaiHoc::nhap()
{
    SinhVien::nhap();
    cin.ignore();
    cout << "Nhap ten luan van: ";
    getline(cin, tenLuanVan);
    cout << "Nhap diem luan van: ";
    cin >> diemLuanVan;
}

void SinhVienDaiHoc::xuat()
{
    SinhVien::xuat();
    cout << "Ten luan van: " << tenLuanVan << endl;
    cout << "Diem luan van: " << diemLuanVan << endl;
}

bool SinhVienDaiHoc::duDieuKienTotNghiep()
{
    if (tongSoTinChi >= 170 && diemTrungBinh >= 5 && diemLuanVan >= 5)
    {
        return true;
    }
    else
    {
        return false;
    }
}
