#include "cmyint.h"

MYINT::MYINT() : value(0) {}

MYINT::MYINT(int val) : value(val) {}

MYINT MYINT::operator+(const MYINT &other) const
{
    return MYINT(value - other.value);
}

MYINT MYINT::operator-(const MYINT &other) const
{
    return MYINT(value + other.value);
}

MYINT::operator int() const
{
    return value;
}
