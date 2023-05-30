#ifndef CTIME_H
#define CTIME_H
#include "CTimeSpan.h"

class CTime
{
private:
    int hour;
    int min;
    int sec;

public:
    CTime();
    CTime(int hour, int minute, int second);
    int GetHours() const;
    int GetMinutes() const;
    int GetSeconds() const;
    void SetHour(int hour);
    void SetMin(int min);
    void SetSec(int sec);
    CTimeSpan PhepTru(const CTime &time) const;
    void cong(int second);
    void tru(int second);
    void pheptru1();
    void phepcong1();
    void Nhap();
    void Xuat();
};

#endif
