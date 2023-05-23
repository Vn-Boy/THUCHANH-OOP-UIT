#include "header.h"
class Candidate
{
private:
    string mssv;
    string ten;
    float diemToan, diemVan, diemAnh;

public:
    Candidate()
    {
    }
    Candidate(string mssv, string ten, int diemToan, int diemVan, int diemAnh)
    {
        this->mssv = mssv;
        this->ten = ten;
        this->diemToan = diemToan;
        this->diemVan = diemVan;
        this->diemAnh = diemAnh;
    }
    void Xuat()
    {
        cout << mssv << " " << ten << " " << diemToan << " " << diemVan << " " << diemAnh << endl;
    }
    float TongDiem()
    {
        return this->diemToan + this->diemVan + this->diemAnh;
    }
    string getTen()
    {
        return this->ten;
    }
    string getMssv()
    {
        return this->mssv;
    }
    float getDiemToan()
    {
        return this->diemToan;
    }
    float getDiemVan()
    {
        return this->diemVan;
    }
    float getDiemAnh()
    {
        return this->diemAnh;
    }
};
class TestCandidate : public Candidate
{
private:
    vector<Candidate> Candidates;

public:
    TestCandidate()
    {
    }
    void inPutCandiate()
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
    void XuatTongdiemLonHon15()
    {
        for (Candidate A : Candidates)
        {
            if (A.TongDiem() > 15)
            {
                cout << A.getMssv() << " " << A.getTen() << " " << A.getDiemToan() << " " << A.getDiemVan() << " " << A.getDiemAnh() << endl;
            }
        }
    }
};
