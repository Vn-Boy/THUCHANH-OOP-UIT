#include "dathuc.h"

Polynomial::Polynomial() {}

Polynomial::Polynomial(const std::vector<int> &coeffs) : heso(coeffs) {}

int Polynomial::degree() const
{
    return heso.size() - 1;
}

int Polynomial::coefficient(int degree) const
{
    if (degree >= 0 && degree < heso.size())
    {
        return heso[degree];
    }
    return 0;
}

Polynomial Polynomial::operator+(const Polynomial &other) const
{
    int maxDegree = std::max(degree(), other.degree());
    std::vector<int> resultCoeffs(maxDegree + 1, 0);

    for (int i = 0; i <= maxDegree; ++i)
    {
        resultCoeffs[i] = coefficient(i) + other.coefficient(i);
    }

    return Polynomial(resultCoeffs);
}

Polynomial Polynomial::operator-(const Polynomial &other) const
{
    int maxDegree = std::max(degree(), other.degree());
    std::vector<int> resultCoeffs(maxDegree + 1, 0);

    for (int i = 0; i <= maxDegree; ++i)
    {
        resultCoeffs[i] = coefficient(i) - other.coefficient(i);
    }

    return Polynomial(resultCoeffs);
}

Polynomial Polynomial::operator*(const Polynomial &other) const
{
    int resultDegree = degree() + other.degree();
    std::vector<int> resultCoeffs(resultDegree + 1, 0);

    for (int i = 0; i <= degree(); ++i)
    {
        for (int j = 0; j <= other.degree(); ++j)
        {
            resultCoeffs[i + j] += coefficient(i) * other.coefficient(j);
        }
    }

    return Polynomial(resultCoeffs);
}

std::ostream &operator<<(std::ostream &os, const Polynomial &poly)
{
    int degree = poly.degree();

    for (int i = degree; i >= 0; --i)
    {
        int coefficient = poly.coefficient(i);

        if (coefficient != 0)
        {
            if (coefficient > 0 && i != degree)
            {
                os << "+";
            }

            if (coefficient != 1 || i == 0)
            {
                os << coefficient;
            }

            if (i > 0)
            {
                os << "x";
                if (i > 1)
                {
                    os << "^" << i;
                }
            }
        }
    }

    return os;
}
