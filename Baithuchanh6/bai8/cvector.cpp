#include "cvector.h"
#include <cmath>

CVector::CVector() {}

CVector::CVector(const std::vector<double> &elems) : elements(elems) {}

int CVector::chieukhonggian() const
{
    return elements.size();
}

double CVector::element(int index) const
{
    if (index >= 0 && index < elements.size())
    {
        return elements[index];
    }
    return 0.0;
}

CVector CVector::operator+(const CVector &other) const
{
    int dim = std::max(chieukhonggian(), other.chieukhonggian());
    std::vector<double> resultElems(dim, 0.0);

    for (int i = 0; i < dim; ++i)
    {
        resultElems[i] = element(i) + other.element(i);
    }

    return CVector(resultElems);
}

CVector CVector::operator-(const CVector &other) const
{
    int dim = std::max(chieukhonggian(), other.chieukhonggian());
    std::vector<double> resultElems(dim, 0.0);

    for (int i = 0; i < dim; ++i)
    {
        resultElems[i] = element(i) - other.element(i);
    }

    return CVector(resultElems);
}

CVector CVector::operator*(double scalar) const
{
    std::vector<double> resultElems(chieukhonggian(), 0.0);

    for (int i = 0; i < chieukhonggian(); ++i)
    {
        resultElems[i] = element(i) * scalar;
    }

    return CVector(resultElems);
}

double CVector::length() const
{
    double sum = 0.0;

    for (int i = 0; i < chieukhonggian(); ++i)
    {
        sum += element(i) * element(i);
    }

    return std::sqrt(sum);
}

std::ostream &operator<<(std::ostream &os, const CVector &vec)
{
    os << "(";
    int dim = vec.chieukhonggian();

    for (int i = 0; i < dim; ++i)
    {
        os << vec.element(i);
        if (i < dim - 1)
        {
            os << ", ";
        }
    }

    os << ")";
    return os;
}
