#include "Complex.h"
#include <math.h>

double ComplexNumber::absValue() const
{
    return sqrt(pow(ao, 2) + pow(thuc, 2));
}
bool ComplexNumber::operator!=(const ComplexNumber &c) const
{
    return (ao != c.ao) || (thuc != c.thuc);
}
bool ComplexNumber::operator==(const ComplexNumber &c) const
{
    return (ao == c.ao) && (thuc == c.thuc);
}
bool ComplexNumber::operator>(const ComplexNumber &c) const
{
    return absValue() > c.absValue();
}
bool ComplexNumber::operator<(const ComplexNumber &c) const
{
    return absValue() < c.absValue();
}
bool ComplexNumber::operator>=(const ComplexNumber &c) const
{
    return absValue() >= c.absValue();
}
ComplexNumber ComplexNumber::operator+(const ComplexNumber &c) const
{
    ComplexNumber result;
    result.ao = ao + c.ao;
    result.thuc = thuc + c.thuc;
    return result;
}
ComplexNumber ComplexNumber::operator-(const ComplexNumber &c) const
{
    ComplexNumber result;
    result.ao = ao - c.ao;
    result.thuc = thuc - c.thuc;
    return result;
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber &c) const
{
    ComplexNumber result;
    result.thuc = thuc * c.thuc - ao * c.ao;
    result.ao = thuc * c.ao + ao * c.thuc;
    return result;
}
ComplexNumber ComplexNumber::operator/(const ComplexNumber &c) const
{
    ComplexNumber result;
    result.thuc = (thuc * c.thuc + ao * c.ao) / (pow(c.thuc, 2) + pow(c.ao, 2));
    result.ao = (ao * c.thuc - thuc * c.ao) / (pow(c.thuc, 2) + pow(c.ao, 2));
    return result;
}