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
    CTimeSpan()
    {
        this->days = 0;
        this->hours = 0;
        this->secs = 0;
        this->millisecs = 0;
    };
    CTimeSpan(long day, long hours, long mins, long secs, long millisecs)
    {
        this->days = day;
        this->mins = mins;
        this->hours = hours;
        this->secs = secs;
        this->millisecs = millisecs;
    }

    long GetDays() const
    {
        return this->days;
    }

    long GetHours() const
    {
        return this->hours;
    }
    long GetSecs() const
    {
        return this->secs;
    }
    long GetMins() const
    {
        return this->mins;
    }
    long GetMillis()
    {
        return this->millisecs;
    }
    void SetDays(long days)
    {
        this->days = days;
    }
    void SetHours(long hours)
    {
        this->hours = hours;
    }
    void SetMins(long mins)
    {
        this->mins = mins;
    }
    void SetSecs(long secs)
    {
        this->secs = secs;
    }
    void SetMilis(long millisecs)
    {
        this->millisecs = millisecs;
    }
    void ChuanHoaCong()
    {
        if (GetMillis() >= 1000)
        {
            SetSecs(GetSecs() + GetMillis() / 1000);
            SetMilis(GetMillis() % 1000);
        }
        if (GetSecs() >= 60)
        {
            SetMins(GetMins() + GetSecs() / 60);
            SetSecs(GetSecs() % 60);
        }
        if (GetMins() >= 60)
        {
            SetHours(GetHours() + GetMins() / 60);
            SetMins(GetMins() % 60);
        }
        if (GetHours() >= 24)
        {
            SetDays(GetDays() + GetHours() / 24);
            SetHours(GetHours() % 24);
        }
    }
    void ChuanHoaTru()
    {
        if (GetMillis() < 0)
        {
            SetSecs(GetSecs() - 1);
            SetMilis(GetMillis() + 1000);
        }
        if (GetSecs() < 0)
        {
            SetMins(GetMins() - 1);
            SetSecs(GetSecs() + 60);
        }
        if (GetMins() < 0)
        {
            SetHours(GetHours() - 1);
            SetMins(GetMins() + 60);
        }
        if (GetHours() < 0)
        {
            SetDays(GetDays() - 1);
            SetHours(GetHours() + 24);
        }
        }
    void cong(CTimeSpan &ts)
    {
        SetDays(GetDays() + ts.GetDays());
        SetHours(GetHours() + ts.GetHours());
        SetMins(GetMins() + ts.GetMins());
        SetSecs(GetSecs() + ts.GetSecs());
        SetMilis(GetMillis() + ts.GetMillis());
        ChuanHoaCong();
    }
    void tru(CTimeSpan &ts)
    {
        SetDays(GetDays() - ts.GetDays());
        SetHours(GetHours() - ts.GetHours());
        SetMins(GetMins() - ts.GetMins());
        SetSecs(GetSecs() - ts.GetSecs());
        SetMilis(GetMillis() - ts.GetMillis());
        ChuanHoaTru();
    }
    bool bang(CTimeSpan &ts)
    {
        return (GetDays() == ts.GetDays() && GetHours() == ts.GetHours() && GetMins() == ts.GetMins() && GetSecs() == ts.GetSecs() && GetMillis() == ts.GetMillis());
    }

    bool khac(CTimeSpan &ts)
    {
        return !bang(ts);
    }

    bool lonHon(CTimeSpan &ts)
    {
        if (GetDays() != ts.GetDays())
            return GetDays() > ts.GetDays();
        else
        {
            if (GetHours() != ts.GetHours())
                return GetHours() > ts.GetHours();
            else
            {
                if (GetMins() != ts.GetMins())
                    return GetMins() > ts.GetMins();
                else
                {
                    if (GetSecs() != ts.GetSecs())
                        return GetSecs() > ts.GetSecs();
                    else
                    {
                        if (GetMillis() != ts.GetMillis())
                            return GetMillis() > ts.GetMillis();
                    }
                }
            }
        }
    }
    bool nhohon(CTimeSpan &ts)
    {
        return !lonHon(ts);
    }
    bool lonhonhoacbang(CTimeSpan &ts)
    {
        return lonHon(ts) || bang(ts);
    }
    bool nhohonhoacbang(CTimeSpan &ts)
    {
        return nhohon(ts) || bang(ts);
    }
    void Nhap()
    {
        long days, hours, mins, secs, milisecs;
        cin >> days >> hours >> mins >> secs >> milisecs;
        SetDays(days);
        SetHours(hours);
        SetMilis(milisecs);
        SetMins(mins);
        SetSecs(secs);
    }
    void Xuat()
    {
        cout << GetDays() << GetHours() << GetMins() << GetSecs() << GetMillis();
    }
};