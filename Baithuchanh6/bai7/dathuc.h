#ifndef dathuc_H
#define dathuc_H

#include <iostream>
#include <vector>

class Polynomial
{
private:
    std::vector<int> heso;

public:
    Polynomial();
    Polynomial(const std::vector<int> &coeffs);

    int degree() const;
    int coefficient(int degree) const;

    Polynomial operator+(const Polynomial &other) const;
    Polynomial operator-(const Polynomial &other) const;
    Polynomial operator*(const Polynomial &other) const;
    friend std::ostream &operator<<(std::ostream &os, const Polynomial &poly);
};

#endif
