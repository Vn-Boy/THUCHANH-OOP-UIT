#include <iostream>
#include "bai1.h"
using namespace std;
class CTime
{
private:
    int hour;
    int min;
    int sec;

public:
    CTime(){

    };
    CTime(int hour, int minute, int second)
    {
        this->hour = hour;
        this->min = minute;
        this->sec = second;
    }
    int GetHours() const
    {
        return this->hour;
    }
    int GetMinutes() const
    {
        return this->min;
    }
    int GetSeconds() const
    {
        return this->sec;
    }
    void SetHour(int hour)
    {
        this->hour = hour;
    }
    void SetMin(int min)
    {
        this->min = min;
    }
    void SetSec(int sec)
    {
        this->sec = sec;
    }
    CTimeSpan PhepTru(const CTime &time) const
    {
        int hours = GetHours() - time.GetHours();
        int minutes = GetMinutes() - time.GetMinutes();
        int seconds = GetSeconds() - time.GetSeconds();

        if (seconds < 0)
        {
            seconds += 60;
            minutes--;
        }

        if (minutes < 0)
        {
            minutes += 60;
            hours--;
        }
        if (hours < 0)
        {
            hours += 24;
        }
        return CTimeSpan(0, hours, minutes, seconds, 0);
    }
    void cong(int second)
    {
        SetSec(GetSeconds() + second);
        if (GetSeconds() >= 60)
        {
            SetMin(GetMinutes() + GetSeconds() / 60);
            SetSec(GetSeconds() % 60);
        }
        if (GetMinutes() >= 60)
        {
            SetHour(GetHours() + GetHours() / 24);
            SetMin(GetMinutes() % 60);
        }
    }
    void tru(int second)
    {
        SetSec(GetSeconds() - second);
        if (GetSeconds() < 0)
        {
            SetSec(GetSeconds() + 60);
            SetMin(GetMinutes() - 1);
        }
        if (GetMinutes() < 0)
        {
            SetMin(GetMinutes() + 60);
            SetHour(GetHours() - 1);
        }
    }
    void pheptru1()
    {
        tru(1);
    }
    void phepcong1()
    {
        cong(1);
    }
    void Nhap()
    {
        int hours, minutes, seconds;
        cin >> hours >> minutes >> seconds;
        SetHour(hours);
        SetMin(minutes);
        SetSec(seconds);
    }
    void Xuat()
    {
        cout << GetHours() << GetMinutes() << GetSeconds();
    }
};