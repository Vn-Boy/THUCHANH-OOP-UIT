#ifndef INTEGER_H
#define INTEGER_H

#include <iostream>

class INTEGER
{
private:
    int value;

public:
    INTEGER();
    INTEGER(int val);
    INTEGER &operator=(int val);
    INTEGER &operator=(const INTEGER &other);
    operator int() const;
    INTEGER operator+(const INTEGER &other) const;
    INTEGER operator-(const INTEGER &other) const;
    INTEGER operator*(const INTEGER &other) const;
    INTEGER operator/(const INTEGER &other) const;
    INTEGER operator%(const INTEGER &other) const;

    bool operator==(const INTEGER &other) const;
    bool operator!=(const INTEGER &other) const;
    bool operator<(const INTEGER &other) const;
    bool operator<=(const INTEGER &other) const;
    bool operator>(const INTEGER &other) const;
    bool operator>=(const INTEGER &other) const;
    INTEGER &operator++();   
    INTEGER operator++(int); // Hậu tố ++
    INTEGER &operator--();   // Tiền tố --
    INTEGER operator--(int); // Hậu tố --
    friend std::ostream &operator<<(std::ostream &os, const INTEGER &num);
    friend std::istream &operator>>(std::istream &is, INTEGER &num);
};

#endif
