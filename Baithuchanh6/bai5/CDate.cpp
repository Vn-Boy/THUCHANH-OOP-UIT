#include "CDate.h"
CDate::CDate()
{
    years = 0;
    months = 0;
    days = 0;
}
CDate::CDate(int y, int m, int d)
{
    years = y;
    months = m;
    days = d;
}
istream &operator>>(istream &is, CDate &date)
{
    is >> date.years >> date.months >> date.days;
    return is;
}
ostream &operator<<(ostream &os, const CDate &date)
{
    os << date.years << date.months << date.days;
    return os;
}
bool CDate::checkYear()
{
    if (years % 400 == 0)
        return true;
    if (years % 100 == 0)
        return false;
    if (years % 4 == 0)
        return true;
    return false;
}
void CDate::checkValid()
{

    int daysmonth2 = checkYear() ? 29 : 28;
    if (months == 2)
    {
        if (days > daysmonth2)
        {
            months++;
            days -= daysmonth2;
        }
        else if (days < 0)
        {
            months--;
            days += daysmonth2;
        }
    }
    else if (months == 4 || months == 6 || months == 9 || months == 11)
    {
        if (days > 30)
        {
            months++;
            days -= 30;
        }
        else if (days < 0)
        {
            months--;
            days += 30;
        }
    }
    else
    {
        if (days > 31)
        {
            months++;
            days -= 31;
        }
        else if (days < 0)
        {
            months--;
            days += 31;
        }
    }
    if (months > 12)
    {
        years++;
        months -= 12;
    }
    else if (months < 1)
    {
        years--;
        months += 12;
    }
    if (years < 0)
    {
        years = 0;
        months = 0;
        days = 0;
    }
}
int CDate::convertDays()
{
    return (years * (checkYear() ? 366 : 365) + months * 30 + days);
}
CDate CDate::operator++()
{
    this->days++;
    checkValid();
    return *this;
}
CDate CDate::operator--()
{
    this->days--;
    checkValid();
    return *this;
}
CDate CDate::operator+(const int &days)
{
    this->days += days;
    checkValid();
    return *this;
}
CDate CDate::operator-(const int &days)
{
    this->days -= days;
    checkValid();
    return *this;
}
int CDate::operator-(CDate &date)
{
    return convertDays() - date.convertDays();
}