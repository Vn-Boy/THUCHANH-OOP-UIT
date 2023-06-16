

#include "KhachHang.cpp"
int main()
{
    ifstream input("C:\\C++\\Thuchanhopp\\Baithuchanh7\\Bai4\\XYZ.INP");
    ofstream output("C:\\C++\\Thuchanhopp\\Baithuchanh7\\Bai4\\XYZ.OUT");

    int x, y, z;
    input >> x >> y >> z;

    vector<KhachHang *> dskh;

    for (int i = 0; i < x; i++)
    {
        KhachHangA *kh = new KhachHangA();
        kh->nhap(input);
        dskh.push_back(kh);
    }

    for (int i = 0; i < y; i++)
    {
        KhachHangB *kh = new KhachHangB();
        kh->nhap(input);
        dskh.push_back(kh);
    }
    for (int i = 0; i < z; i++)
    {
        KhachHangC *kh = new KhachHangC();
        kh->nhap(input);
        dskh.push_back(kh);
    }

    output << x << " " << y << " " << z << endl;

    double tongTien = 0;

    for (KhachHang *kh : dskh)
    {
        double tien = kh->tinhTien();
        output << kh->getTen() << endl
               << tien << endl;
        tongTien += tien;
    }

    output << tongTien;

    input.close();
    output.close();

    return 0;
}
