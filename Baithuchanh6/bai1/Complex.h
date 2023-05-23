#ifndef COMPLEX_NUMBER
#define COMPLEX_NUMBER
#include <iostream>
#include <istream>
using namespace std;
class ComplexNumber
{
private:
    double thuc;
    double ao;

public:
    ComplexNumber(double thuc = 0.0, double ao = 0.0) : thuc(thuc), ao(ao){};
    friend istream &operator>>(istream &in, ComplexNumber &c)
    {
        in >> c.thuc >> c.ao;
        return in;
    }
    friend ostream &operator<<(ostream &out, const ComplexNumber &c)
    {
        out << c.thuc << "+" << c.ao << "i";
        return out;
    }
    ~ComplexNumber();

    ComplexNumber operator+(const ComplexNumber &c) const;
    ComplexNumber operator-(const ComplexNumber &c) const;
    double absValue() const;
    ComplexNumber operator*(const ComplexNumber &c) const;
    ComplexNumber operator/(const ComplexNumber &c) const;
    bool operator!=(const ComplexNumber &c) const;
    bool operator==(const ComplexNumber &c) const;
    bool operator>(const ComplexNumber &c) const;
    bool operator<(const ComplexNumber &c) const;
    bool operator>=(const ComplexNumber &c) const;
};
#endif