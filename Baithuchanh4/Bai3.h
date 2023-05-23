
#include <iostream>
using namespace std;
class CDate
{
private:
    int day;
    int month;
    int year;

public:
    CDate();
    CDate(int day, int month, int year);
    int getDay() const;
    void setDay(int day);
    int getMonth() const;
    void setMonth(int month);
    int getYear() const;
    void setYear(int year);
    void cong(int n);
    void tru(int n);
    void ngaytruocdo();
    void ngayketiep();
    bool bangnhau(CDate &otherDate)
    {
        return getDay() == otherDate.getDay() && getMonth() == otherDate.getMonth() && getYear() == otherDate.getYear();
    }
    bool lonhon(CDate &otherDate)
    {
        if (getYear() != otherDate.getYear())
        {
            return getYear() > otherDate.getYear();
        }
        else
        {
            if (getMonth() != otherDate.getMonth())
            {
                return getMonth() > otherDate.getMonth();
            }
            else
            {
                return getDay() > otherDate.getDay();
            }
        }
    }
    int khoangcach(CDate &otherDate);
    void input();
    void output();
};
CDate::CDate()
{
    day = 1;
    month = 1;
    year = 1970;
}

CDate::CDate(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}
int CDate::getDay() const
{
    return day;
}

void CDate::setDay(int day)
{
    this->day = day;
}

int CDate::getMonth() const
{
    return month;
}

void CDate::setMonth(int month)
{
    this->month = month;
}

int CDate::getYear() const
{
    return year;
}

void CDate::setYear(int year)
{
    this->year = year;
}
void CDate::input()
{
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
}

void CDate::output()
{
    cout << day << "/" << month << "/" << year << endl;
}

void CDate::cong(int n)
{
    int totalDays = day + n;
    while (totalDays > 0)
    {
        int ngayTrongThang = 0;
        if (month == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                ngayTrongThang = 29;
            }
            else
            {
                ngayTrongThang = 28;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            ngayTrongThang = 30;
        }
        else
        {
            ngayTrongThang = 31;
        }
        if (totalDays > ngayTrongThang)
        {
            totalDays -= ngayTrongThang;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
        else
        {
            day = totalDays;
            break;
        }
    }
}
void CDate::tru(int n)
{
    int totalDays = day - n;
    while (totalDays <= 0)
    {
        int ngayTrongThangTruoc = 0;
        if (month == 3)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                ngayTrongThangTruoc = 29;
            }
            else
            {
                ngayTrongThangTruoc = 28;
            }
        }
        else if (month == 5 || month == 7 || month == 10 || month == 12)
        {
            ngayTrongThangTruoc = 30;
        }
        else
        {
            ngayTrongThangTruoc = 31;
        }
        totalDays += ngayTrongThangTruoc;
        month--;
        if (month < 1)
        {
            month = 12;
            year--;
        }
    }
    day = totalDays;
}

void CDate::ngayketiep()
{
    cong(1);
}

void CDate::ngaytruocdo()
{
    tru(1);
}
int CDate::khoangcach(CDate &ngaykhac)
{
    int count = 0;
    CDate temp = *this;
    while (!bangnhau(ngaykhac))
    {
        if (lonhon(ngaykhac))
        {
            temp.cong(1);
            count++;
        }
        else
        {
            temp.tru(1);
            count++;
        }
    }
    return count;
}