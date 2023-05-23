#include "header.h"

string name;
float diemtoan, diemvan;
void TinhDiemTrungBinh()
{
     cout << "Nhập họ tên: \n";
     getline(cin, name);
     cout << "Nhập điểm toán: \n";
     cin >> diemtoan;
     cout << "Nhập điểm văn: \n";
     cin >> diemvan;
     float trungbinh = (diemtoan + diemvan) / 2;
     cout << "Họ tên: \n"
          << name << "\n";
     cout << "Điểm trung bình: \n"
          << trungbinh << "\n";
}