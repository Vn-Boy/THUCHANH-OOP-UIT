#ifndef CTIME_SPAN
#define CTIME_SPAN

class CTimeSpan
{
private:
    long long seconds;

public:
    CTimeSpan(long long sec = 0) : seconds(sec)
    {
    }
    CTimeSpan operator+(const CTimeSpan &ts) const;
    CTimeSpan operator-(const CTimeSpan &ts) const;
    bool operator==(const CTimeSpan &ts) const;
    bool operator!=(const CTimeSpan &ts) const;
    bool operator>(const CTimeSpan &ts) const;
    bool operator<(const CTimeSpan &ts) const;
    bool operator>=(const CTimeSpan &ts) const;
    bool operator<=(const CTimeSpan &ts) const;
};
#endif