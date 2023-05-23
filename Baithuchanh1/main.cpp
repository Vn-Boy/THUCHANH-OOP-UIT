#include "header.h"
#include "bai2.h"
#include "bai3.h"
#include "bai4.h"
#include "bai5.h"

void displaymenu()
{
    cout << "===================================================== \n";
    cout << " \t\tMENU \t \n ";
    cout << "===================================================== \n";
    cout << " 1. Bai 1)Ham rut gon phan so\n";
    cout << " 2. Bai 2)Ham tim max phan so\n";
    cout << " 3. Bai 3)Ham thuc hien cong tru nhan chia hai phan so \n";
    cout << " 4. Bai 4)Ham tim ngay ke tiep\n";
    cout << " 5. Bai 5)Ham xuat diem trung binh\n";
}
int main()
{

    string st[20];
    displaymenu();
    int yourchoice;
    string confirm;

    do
    {
        cout << "Nhap cac so tu 1 toi 5 de thuc hien hanh dong: \n";
        cin >> yourchoice;

        switch (yourchoice)
        {
        case 1:
            cout << "Nhap phan so\n";
            int a, b;
            cin >> a >> b;
            RutGonPhanSo(a, b);
            break;
        case 2:
            PhanSoLonNhat();
            break;
        case 3:
            cout << "Nhap phan so thu 1\n";
            cin >> x1 >> y1;
            setX1Y1(x1, y1);
            cout << "Nhap phan so thu 2\n";
            cin >> x2 >> y2;
            setX2Y2(x2, y2);
            cout << "Cong hai phan so\n";
            CongHaiPhanSo();
            cout << "Tru hai phan so\n";
            TruHaiPhanSo();
            cout << "Nhan hai phan so\n";
            NhanHaiPhanSo();
            cout << " Chia hai phan so\n";
            ChiaHaiPhanSo();
            break;
        case 4:
            cout << "Nhap ngay\n";
            cin >> ngay;
            cout << "Nhap thang\n";
            cin >> thang;
            cout << "Nhap nam\n";
            cin >> nam;
            ngayKeTiep();
            break;
        case 5:
            TinhDiemTrungBinh();
            break;

        default:
            cout << "khong hop le";
            break;
        }
        cout << "\nNhan y hoac Y de tiep tuc:";
        cin >> confirm;
    } while (confirm == "y" || confirm == "Y");
    return 0;
}