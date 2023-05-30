#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <string>
using namespace std;
class NhanVien
{
private:
    string HoTen;
    string NgaySinh;
    int luong;

public:
    NhanVien(string Hoten, string Ngaysinh);
    NhanVien();
    double getLuong();
    void setLuong(int Luong);
    virtual void printLuong() = 0;
};
#endif