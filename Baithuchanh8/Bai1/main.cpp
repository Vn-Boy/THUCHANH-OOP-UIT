#include "SinhVienUIT.cpp"

class TruongUIT
{
private:
    int soLuong;
    SinhVien **ds;

public:
    TruongUIT()
    {
        cout << "Nhap so luong sinh vien: ";
        cout << endl;
        cin >> soLuong;
        ds = new SinhVien *[soLuong];
    }
    ~TruongUIT()
    {
        delete[] ds;
    }
    void nhapDanhSach()
    {
        int loai;
        for (int i = 0; i < this->soLuong; i++)
        {

            cout << "Nhap loai, loai 1-> svdh || loai 2-> svdhdtb\n";
            cin >> loai;
            if (loai == 1)
            {
                ds[i] = new SinhVienCaoDang;
                ds[i]->loai = 1;
            }
            else if (loai == 2)
            {
                ds[i] = new SinhVienDaiHoc;
                ds[i]->loai = 2;
            }
            else
            {
                i--;
                continue;
            }
            ds[i]->nhap();
        }
    }
    void xuatDanhSach()
    {
        for (int i = 0; i < this->soLuong; i++)
        {
            ds[i]->xuat();
        }
    }
    void xuatDanhSachSinhVienDuDieuKienTotNghiep()
    {
        for (int i = 0; i < this->soLuong; i++)
        {
            if (ds[i]->duDieuKienTotNghiep())
            {
                ds[i]->xuat();
            }
        }
    }
    void xuatDanhSachSinhVienKhongDuDieuKien()
    {
        for (int i = 0; i < this->soLuong; i++)
        {
            if (!ds[i]->duDieuKienTotNghiep())
            {
                ds[i]->xuat();
            }
        }
    }
    SinhVienDaiHoc *SVDHDTBCaoNhat()
    {
        SinhVienDaiHoc *maxSinhVien = nullptr;
        double maxDTB = 0;
        for (int i = 0; i < this->soLuong; i++)
        {
            SinhVienDaiHoc *SVDaiHoc = dynamic_cast<SinhVienDaiHoc *>(ds[i]);
            if (SVDaiHoc != nullptr && SVDaiHoc->loai == 1 && SVDaiHoc != NULL)
            {
                if (SVDaiHoc->layDiemTrungBinh() > maxDTB)
                {
                    maxSinhVien = SVDaiHoc;
                    maxDTB = SVDaiHoc->layDiemTrungBinh();
                }
            }
        }
        maxSinhVien->xuat();
        return maxSinhVien;
    }
    SinhVienCaoDang *SVCDDTBCaoNhat()
    {
        SinhVienCaoDang *maxSinhVien = nullptr;
        double maxDTB = 0;
        for (int i = 0; i < this->soLuong; i++)
        {
            SinhVienCaoDang *SVCaoDang = dynamic_cast<SinhVienCaoDang *>(ds[i]);
            if (SVCaoDang != nullptr && SVCaoDang->loai == 2 && SVCaoDang != NULL)
            {
                if (SVCaoDang->layDiemTrungBinh() > maxDTB)
                {
                    maxSinhVien = SVCaoDang;
                    maxDTB = SVCaoDang->layDiemTrungBinh();
                }
            }
        }
        maxSinhVien->xuat();
        return maxSinhVien;
    }
    void demSoSVKhongDuDieuKien()
    {
        int soSVCD = 0;
        int soSVDH = 0;
        for (int i = 0; i < this->soLuong; i++)
        {
            if (!ds[i]->duDieuKienTotNghiep())
            {
                SinhVienCaoDang *svcd = dynamic_cast<SinhVienCaoDang *>(ds[i]);
                if (svcd != NULL && svcd->loai == 2)
                {
                    soSVCD++;
                }
                else
                {
                    soSVDH++;
                }
            }
        }
        cout << "So sinh vien cao dang khong du dieu kien tot nghiep la: " << soSVCD << endl;
        cout << "So sinh vien dai hoc khong du dieu kien tot nghiep la: " << soSVDH << endl;
    }
};
void Init()
{
    TruongUIT uit;
    uit.nhapDanhSach();
    uit.xuatDanhSach();
    SinhVienCaoDang *svcd = uit.SVCDDTBCaoNhat();
    SinhVienDaiHoc *svdh = uit.SVDHDTBCaoNhat();
    uit.xuatDanhSachSinhVienDuDieuKienTotNghiep();
    uit.xuatDanhSachSinhVienKhongDuDieuKien();
    uit.demSoSVKhongDuDieuKien();
}
int main()
{
    Init();
    return 0;
}
