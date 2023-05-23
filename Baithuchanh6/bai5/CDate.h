#ifndef CDATE_H
#define CDATE_H
#include <iostream>
using namespace std;
class CDate
{
private:
    int days;
    int months;
    int years;

public:
    CDate();
    CDate(int days, int months, int years);
    ~CDate();
    CDate operator+(const int &days);
    CDate operator-(const int &days);
    int operator-(CDate &date);
    int convertDays();
    CDate operator++();
    CDate operator--();
    void checkValid();
    bool checkYear();
    friend istream &operator>>(istream &is, CDate &date);
    friend ostream &operator<<(ostream &os, const CDate &date);
};

#endif