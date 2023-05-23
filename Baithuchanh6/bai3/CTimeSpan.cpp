#include "CTimeSpan.h"
#include <iostream>
CTimeSpan CTimeSpan::operator+(const CTimeSpan &other) const
{
    CTimeSpan temp;
    temp.seconds = seconds + other.seconds;
    return temp;
}
CTimeSpan CTimeSpan::operator-(const CTimeSpan &other) const
{
    CTimeSpan temp;
    temp.seconds = seconds - other.seconds;
    return temp;
}
bool CTimeSpan::operator<(const CTimeSpan &other) const
{
    return seconds < other.seconds;
}
bool CTimeSpan::operator>(const CTimeSpan &other) const
{
    return seconds > other.seconds;
}
bool CTimeSpan::operator<=(const CTimeSpan &other) const
{
    return seconds <= other.seconds;
}
bool CTimeSpan::operator>=(const CTimeSpan &other) const
{
    return seconds >= other.seconds;
}
bool CTimeSpan::operator==(const CTimeSpan &other) const
{
    return seconds == other.seconds;
}
