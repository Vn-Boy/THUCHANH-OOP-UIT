#include "NhanVien.cpp"
class CongTy
{
private:
    int soluong;
    NhanVien **nv;
    double LuongTrungBinh;

public:
    CongTy()
    {
        cout << "Nhap so luong\n";
        cin >> this->soluong;
        nv = new NhanVien *[this->soluong];
    };
    ~CongTy()
    {
        delete[] nv;
    }
    void Nhap()
    {
        int loai;
        for (int i = 0; i < this->soluong; i++)
        {
            cout << "Nhap loai nhan vien 1->laptrinhvien || 2 -> kiemchungvien\n";
            cin >> loai;
            if (loai == 1)
            {
                nv[i] = new LapTrinhVien();
                nv[i]->Nhap();
            }
            else if (loai == 2)
            {
                nv[i] = new KiemChungVien();
                nv[i]->Nhap();
            }
            else
            {
                i--;
                continue;
            }
        }
    }
    void TinhLuongTrungBinh()
    {
        double sum = 0;
        for (int i = 0; i < this->soluong; i++)
        {
            sum += nv[i]->TinhLuong();
        }
        LuongTrungBinh = sum / this->soluong;
    }
    void Xuat()
    {
        for (int i = 0; i < this->soluong; i++)
        {
            nv[i]->Xuat();
        }
    }
    void XuatNhanVienCoLuongTrungBinhThapHon()
    {
        for (int i = 0; i < this->soluong; i++)
        {
            if (nv[i]->TinhLuong() < LuongTrungBinh)
            {
                nv[i]->Xuat();
            }
        }
    }
    NhanVien *NhanVienLuongCaoNhat()
    {
        double luongcaonhat = 0;
        NhanVien *nvcaonhat = NULL;
        for (int i = 0; i < this->soluong; i++)
        {
            if (luongcaonhat < nv[i]->TinhLuong())
            {
                luongcaonhat = nv[i]->TinhLuong();
                nvcaonhat = nv[i];
            }
        }
        nvcaonhat->Xuat();
        return nvcaonhat;
    }
    NhanVien *NhanVienLuongThapNhat()
    {
        double luongthapnhat = 9999999999999999999999999999999999999;
        NhanVien *nvthapnhat = NULL;
        for (int i = 0; i < this->soluong; i++)
        {
            if (luongthapnhat > nv[i]->TinhLuong())
            {
                luongthapnhat = nv[i]->TinhLuong();
                nvthapnhat = nv[i];
            }
        }
        nvthapnhat->Xuat();
        return nvthapnhat;
    }
    LapTrinhVien *nhanvienlaptrinhcaonhat()
    {
        double luongcaonhat = 0;
        LapTrinhVien *nvcaonhat = new LapTrinhVien();
        for (int i = 0; i < this->soluong; i++)
        {
            nvcaonhat = dynamic_cast<LapTrinhVien *>(nv[i]);
            if (nvcaonhat != NULL)
            {
                if (luongcaonhat < nv[i]->TinhLuong())
                {
                    luongcaonhat = nv[i]->TinhLuong();
                }
            }
        }
        nvcaonhat->Xuat();
        return nvcaonhat;
    }
    KiemChungVien *nhanvienkiemchungcaonhat()
    {
        double luongcaonhat = 0;
        KiemChungVien *nvcaonhat = new KiemChungVien();
        for (int i = 0; i < this->soluong; i++)
        {
            nvcaonhat = dynamic_cast<KiemChungVien *>(nv[i]);
            if (nvcaonhat != NULL)
            {
                if (luongcaonhat < nv[i]->TinhLuong())
                {
                    luongcaonhat = nv[i]->TinhLuong();
                }
            }
        }
        nvcaonhat->Xuat();
        return nvcaonhat;
    }
};
void Init()
{
    CongTy a;
    a.Nhap();
    a.Xuat();
    a.TinhLuongTrungBinh();
    a.XuatNhanVienCoLuongTrungBinhThapHon();
    a.NhanVienLuongCaoNhat();
    a.NhanVienLuongThapNhat();
    LapTrinhVien *b = a.nhanvienlaptrinhcaonhat();
    KiemChungVien *c = a.nhanvienkiemchungcaonhat();
}
int main()
{
    Init();
    return 0;
}