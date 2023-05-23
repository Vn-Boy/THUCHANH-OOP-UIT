#include "cint.h"

INTEGER::INTEGER() : value(0) {}

INTEGER::INTEGER(int val) : value(val) {}

INTEGER &INTEGER::operator=(int val)
{
    value = val;
    return *this;
}

INTEGER &INTEGER::operator=(const INTEGER &other)
{
    value = other.value;
    return *this;
}

INTEGER::operator int() const
{
    return value;
}

INTEGER INTEGER::operator+(const INTEGER &other) const
{
    return INTEGER(value + other.value);
}

INTEGER INTEGER::operator-(const INTEGER &other) const
{
    return INTEGER(value - other.value);
}

INTEGER INTEGER::operator*(const INTEGER &other) const
{
    return INTEGER(value * other.value);
}

INTEGER INTEGER::operator/(const INTEGER &other) const
{
    return INTEGER(value / other.value);
}

INTEGER INTEGER::operator%(const INTEGER &other) const
{
    return INTEGER(value % other.value);
}

bool INTEGER::operator==(const INTEGER &other) const
{
    return value == other.value;
}

bool INTEGER::operator!=(const INTEGER &other) const
{
    return value != other.value;
}

bool INTEGER::operator<(const INTEGER &other) const
{
    return value < other.value;
}

bool INTEGER::operator<=(const INTEGER &other) const
{
    return value <= other.value;
}

bool INTEGER::operator>(const INTEGER &other) const
{
    return value > other.value;
}

bool INTEGER::operator>=(const INTEGER &other) const
{
    return value >= other.value;
}

INTEGER &INTEGER::operator++()
{
    ++value;
    return *this;
}

INTEGER INTEGER::operator++(int)
{
    INTEGER temp(value);
    ++value;
    return temp;
}

INTEGER &INTEGER::operator--()
{
    --value;
    return *this;
}

INTEGER INTEGER::operator--(int)
{
    INTEGER temp(value);
    --value;
    return temp;
}

std::ostream &operator<<(std::ostream &os, const INTEGER &num)
{
    os << num.value;
    return os;
}

std::istream &operator>>(std::istream &is, INTEGER &num)
{
    is >> num.value;
    return is;
}
