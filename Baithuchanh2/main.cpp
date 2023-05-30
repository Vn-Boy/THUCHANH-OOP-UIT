#include "header.h"
#include "Phanso.cpp"
#include "Sophuc.cpp"
#include "Candidate.cpp"

void displaymenu()
{
    cout << "===================================================== \n";
    cout << " \t\tMENU \t \n ";
    cout << "===================================================== \n";
    cout << " 1. Bai 1)Thiet lap lop PhanSo\n";
    cout << " 2. Bai 2)Thiet lap lop SoPhuc\n";
    cout << " 3. Bai 3)Thiet lap lop Candidate va TestCandidate \n";
}
void LopPhanSo(Phanso &A)
{
    int x1, x2, y1, y2;
    cout << "Nhap phan so thu 1\n";
    cin >> x1 >> y1;
    A.setX1Y1(x1, y1);
    cout << "Nhap phan so thu 2\n";
    cin >> x2 >> y2;
    A.setX2Y2(x2, y2);
    cout << "Cong Hai Phan So\n";
    A.CongHaiPhanSo();
    cout << "Tru Hai Phan So\n";
    A.TruHaiPhanSo();
    cout << "Nhan Hai Phan So\n";
    A.NhanHaiPhanSo();
    cout << "Chia Hai Phan So\n";
    A.ChiaHaiPhanSo();
}
void LopSoPhuc(SoPhuc &B)
{
    int a1, a2, b1, b2;
    cout << "Nhap so phuc thu 1\n";
    cin >> a1 >> a2;
    B.getA1A2(a1, a2);
    cout << "Nhap so phuc thu 2\n";
    cin >> b1 >> b2;
    B.getB1B2(b1, b2);
    cout << "Cong hai so phuc\n";
    B.CongHaiSoPhuc();
    cout << "Tru hai so phuc\n";
    B.TruHaiSoPhuc();
    cout << "Nhan hai so phuc\n";
    B.NhanHaiSoPhuc();
    cout << "Chia hai so phuc\n";
    B.ChiaHaiSoPhuc();
}
void LopCandidate(TestCandidate &C)
{
    C.inPutCandiate();
    cout << "so luong sinh vien co tong so diem > 15\n";
    C.XuatTongdiemLonHon15();
}

int main()
{

    string st[20];
    int yourchoice;
    string confirm;
    do
    {
        displaymenu();
        cout << "Nhap cac so tu 1 toi 3 de thuc hien hanh dong: \n";
        cin >> yourchoice;
        Phanso A;
        SoPhuc B;
        TestCandidate C;
        switch (yourchoice)
        {
        case 1:
            LopPhanSo(A);
            break;
        case 2:
            LopSoPhuc(B);
            break;
        case 3:
            LopCandidate(C);
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