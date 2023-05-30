#include "Candidate.h"
#include <iostream>
using namespace std;

Candidate::Candidate()
{
}

Candidate::Candidate(string mssv, string ten, int diemToan, int diemVan, int diemAnh)
{
    this->mssv = mssv;
    this->ten = ten;
    this->diemToan = diemToan;
    this->diemVan = diemVan;
    this->diemAnh = diemAnh;
}

void Candidate::Xuat()
{
    cout << mssv << " " << ten << " " << diemToan << " " << diemVan << " " << diemAnh << endl;
}

float Candidate::TongDiem()
{
    return this->diemToan + this->diemVan + this->diemAnh;
}

string Candidate::getTen()
{
    return this->ten;
}

string Candidate::getMssv()
{
    return this->mssv;
}

float Candidate::getDiemToan()
{
    return this->diemToan;
}

float Candidate::getDiemVan()
{
    return this->diemVan;
}

float Candidate::getDiemAnh()
{
    return this->diemAnh;
}

TestCandidate::TestCandidate()
{
}

void TestCandidate::inPutCandiate()
{
    int n;
    cout << "Nhap so luong sinh vien\n";
    cin >> n;
    string mssv;
    string ten;
    float diemToan, diemVan, diemAnh;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ten sinh vien thu " << i + 1 << "\n";
        getline(cin, ten);
        cout << "Nhap mssv sinh vien thu " << i + 1 << "\n";
        getline(cin, mssv);
        cout << "Nhap diem toan, van, anh cua sinh vien thu " << i + 1 << "\n";
        cin >> diemToan >> diemVan >> diemAnh;
        Candidate A(mssv, ten, diemToan, diemVan, diemAnh);
        Candidates.push_back(A);
        cin.ignore();
    }
}

void TestCandidate::XuatTongdiemLonHon15()
{
    for (Candidate A : Candidates)
    {
        if (A.TongDiem() > 15)
        {
            cout << A.getMssv() << " " << A.getTen() << " " << A.getDiemToan() << " " << A.getDiemVan() << " " << A.getDiemAnh() << endl;
        }
    }
}
