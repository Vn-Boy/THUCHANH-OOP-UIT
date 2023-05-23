#include "CString.h"
CString::CString()
{
    str = new char[1];
    str[0] = '\0';
}
CString::~CString()
{
    delete str;
}
int CString::length()
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}
CString &CString::operator+(CString &s)
{
    int newLenght = length() + s.length() + 1;
    char *newStr = new char[newLenght];
    int count = 0;
    while (str[count] != '\0')
    {
        newStr[count] = str[count];
        count++;
    }
    while (s.str[count - length()] != '\0')
    {
        newStr[count] = s.str[count - length()];
        count++;
    }
    newStr[count] = '\0';
    CString temp;
    temp.str = newStr;
    return temp;
}
bool CString::compare(CString &s)
{
    int count = 0;
    while (str[count] != '\0' || s.str[count] != '\0')
    {
        if (str[count] != s.str[count])
            return false;
        count++;
    }
    if (str[count] != '\0' || s.str[count] != '\0')
        return false;
    return true;
}
istream &operator>>(istream &is, CString &s)
{
    delete[] s.str;
    int capacity = 10;
    s.str = new char[capacity];
    int len = 0;
    char c = is.get();
    while (c != '\n')
    {
        if (len == capacity - 1)
        {
            capacity *= 2;
            char *temp = new char[capacity];
            for (int i = 0; i < len; i++)
                temp[i] = s.str[i];
            delete[] s.str;
            s.str = temp;
        }
        s.str[len++] = c;
        c = is.get();
    }
    s.str[len] = '\0';
    return is;
}
ostream &operator<<(ostream &os, CString &s)
{
    os << s.str;
    return os;
}