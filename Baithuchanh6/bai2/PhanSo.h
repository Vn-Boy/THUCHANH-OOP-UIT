#ifndef PhanSO
#define PhanSO
#include <iostream>
using namespace std;
class PhanSo
{
private:
    double tuso;
    double mauso;

public:
    PhanSo(/* args */);
    ~PhanSo();
    friend ostream &operator<<(ostream &os, const PhanSo &ps);
    friend istream &operator>>(istream &is, PhanSo &ps);
    PhanSo operator+(const PhanSo &ps);
    PhanSo operator-(const PhanSo &ps);
    PhanSo operator*(const PhanSo &ps);
    PhanSo operator/(const PhanSo &ps);
    void Toigian(PhanSo &ps);
    bool operator==(const PhanSo &ps);
    bool operator!=(const PhanSo &ps);
    bool operator>(const PhanSo &ps);
    bool operator<(const PhanSo &ps);
    bool operator>=(const PhanSo &ps);
    bool operator<=(const PhanSo &ps);
};

#endif PhanSo