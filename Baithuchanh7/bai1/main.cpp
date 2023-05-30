#include "NhanVien.cpp"
#include <vector>
class NhanVienSanXuat : public NhanVien
{
private:
    int luongcanban;
    int sosp;

public:
    NhanVienSanXuat(string hoten, string ngaysinh, double luongcanban, int sosp) : NhanVien(hoten, ngaysinh)
    {
        this->luongcanban = luongcanban;
        this->sosp = sosp;
    };
    void printLuong()
    {
        setLuong(luongcanban + sosp * 5);
        cout << "Nhan vien san xuat\n";
        NhanVien::printLuong();
    }
};
class NhanVienVanPhong : public NhanVien
{
private:
    int songaycong;

public:
    NhanVienVanPhong(string hoten, string ngaysinh, int songaycong) : NhanVien(hoten, ngaysinh)
    {
        this->songaycong = songaycong;
    }
    void printLuong()
    {
        setLuong(songaycong * 100);
        cout << "Nhan vien van phong\n";
        NhanVien::printLuong();
    }
};
class QuanlyNhanVien
{
private:
    int soluong;

public:
    vector<NhanVien *> nhanvien;
    QuanlyNhanVien(int soluong) : soluong(soluong)
    {
        nhanvien.resize(soluong);
    };
    void xuat()
    {
        for (int i = 0; i < soluong; i++)
        {
            nhanvien[i]->printLuong();
        }
    };
};
int main()
{
    QuanlyNhanVien ql(2);
    ql.nhanvien[0] = new NhanVienVanPhong("Tran Van G", "07/07/1975", 26);
    ql.nhanvien[1] = new NhanVienSanXuat("Le Thi H", "08/08/1980", 7000000, 400);
    ql.xuat();
}