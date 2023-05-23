#include "header.h"
int ngay, thang, nam;

void setNgay(int ngay_)
{
    ngay = ngay_;
}
void setThang(int thang_)
{
    thang = thang_;
}
void setNam(int nam_)
{
    nam = nam_;
}
int getNgay()
{
    return ngay;
}
int getThang()
{
    return thang;
}
int getNam()
{
    return nam;
}

bool checkYear(int nam)
{
    if (nam % 400 == 0)
        return true;
    if (nam % 100 == 0)
        return false;
    if (nam % 4 == 0)
        return true;
    return false;
}
void doCalculate(int _ngay)
{
    if (thang == 2)
    {
        if (ngay == _ngay)
        {
            setNgay(1);
            setThang(thang + 1);
        }
        else
        {
            setNgay(ngay + 1);
        }
    }
    else if (thang == 12)
    {
        if (ngay == 31)
        {
            setNgay(1);
            setThang(1);
            setNam(nam + 1);
        }
        else
        {
            setNgay(ngay + 1);
        }
    }
    else
    {
        if (ngay == 31)
        {
            setThang(thang + 1);
            setNgay(1);
        }
        else
            setNgay(ngay + 1);
    }
}
void ngayKeTiep()
{
    if (checkYear(nam))
    {
        doCalculate(29);
    }
    else
    {
        doCalculate(28);
    }
    cout << getNgay() << " " << getThang() << " " << getNam();
}
