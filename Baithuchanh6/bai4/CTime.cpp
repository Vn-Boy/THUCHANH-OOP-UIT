#include "CTime.h"
#include "./CTimeSpan.h"
istream &operator>>(istream &is, CTime &t)
{
    is >> t.hours >> t.minutes >> t.seconds;
    return is;
}
ostream &operator<<(ostream &os, const CTime &t)
{
    os << t.hours << ":" << t.minutes << ":" << t.seconds;
}
long long CTime::convertSecond() const
{
    return hours * 24 * 60 * 60 + minutes * 60 * 60 + seconds;
}
void CTime::checkValid()
{
    if (seconds > 60)
    {
        minutes += seconds / 60;
        seconds = int(seconds) % 60;
    }
    if (seconds < 0)
    {
        seconds = 60 + seconds;
        minutes--;
    }
    if (minutes > 60)
    {
        hours = minutes / 60 + hours;
        minutes = int(minutes) % 60;
    }
    if (minutes < 0)
    {
        minutes = 60 + minutes;
        hours--;
    }
    if (hours < 0)
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
}
void CTime::operator++()
{
    seconds++;
    checkValid();
}
void CTime::operator--()
{
    seconds--;
    checkValid();
}
CTimeSpan CTime::operator-(const CTime &t)
{
    long long second = this->convertSecond() - t.convertSecond();
    CTimeSpan ts(second);
    return ts;
}
CTimeSpan CTime::operator+(const CTime &t)
{
    long long second = this->convertSecond() + t.convertSecond();
    CTimeSpan ts(second);
    return ts;
}