#include <iostream>
using namespace std;

class CTimeSpan
{
private:
    long days;
    long hours;
    long mins;
    long secs;
    long millisecs;

public:
    CTimeSpan();
    CTimeSpan(long day, long hours, long mins, long secs, long millisecs);

    long GetDays() const;
    long GetHours() const;
    long GetSecs() const;
    long GetMins() const;
    long GetMillis();
    void SetDays(long days);
    void SetHours(long hours);
    void SetMins(long mins);
    void SetSecs(long secs);
    void SetMilis(long millisecs);
    void ChuanHoaCong();
    void ChuanHoaTru();
    void cong(CTimeSpan &ts);
    void tru(CTimeSpan &ts);
    bool bang(CTimeSpan &ts);
    bool khac(CTimeSpan &ts);
    bool lonHon(CTimeSpan &ts);
    bool nhohon(CTimeSpan &ts);
    bool lonhonhoacbang(CTimeSpan &ts);
    bool nhohonhoacbang(CTimeSpan &ts);
    void Nhap();
    void Xuat();
};
