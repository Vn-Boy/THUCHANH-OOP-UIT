#ifndef DATHUC_H
#define DATHUC_H
#include <vector>
#include <utility>
using namespace std;

class DaThuc
{
private:
    int n;
    vector<pair<double, double>> heso;

public:
    DaThuc();
    ~DaThuc();
    DaThuc(int n);
    vector<pair<double, double>> getVector();
    double NhapGiaTriX(double x);
    void setValueVector(double value, int i);
    int getN();
    void CongDaThuc(DaThuc &dathuc);
    void TruDaThuc(DaThuc &dathuc);
    DaThuc nhan(DaThuc &dathuc);
    DaThuc DaoHam(DaThuc &dathuc);
};

#endif
