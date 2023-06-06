#include "./CTimeSpan.h"
#include <iostream>
using namespace std;
#ifndef CTIME_H
#define CTIME_H
class CTime
{
private:
    double hours;
    double minutes;
    double seconds;

public:
    CTime();
    CTime(double h, double m, double s);
    ~CTime();
    long long convertSecond() const;
    void operator++();
    void operator--();
    void checkValid();
    CTimeSpan operator+(const CTime &t);
    CTimeSpan operator-(const CTime &t);
    friend ostream &operator<<(ostream &os, const CTime &t);
    friend istream &operator>>(istream &is, CTime &t);
};
#endif