#ifndef CSTRING_H
#define CSTRING_H
#include <iostream>
using namespace std;
class CString
{
private:
    char *str;

public:
    CString();
    ~CString();
    int length();
    CString &operator+(CString &s);
    bool compare(CString &s);
    friend ostream &operator<<(ostream &os, CString &s);
    friend istream &operator>>(istream &is, CString &s);
};
#endif