#ifndef CVECTOR_H
#define CVECTOR_H

#include <iostream>
#include <vector>

class CVector
{
private:
    std::vector<double> elements;

public:
    CVector();
    CVector(const std::vector<double> &elems);
    int chieukhonggian() const;
    double element(int index) const;
    CVector operator+(const CVector &other) const;
    CVector operator-(const CVector &other) const;
    CVector operator*(double vector) const;
    double length() const;
    friend std::ostream &operator<<(std::ostream &os, const CVector &vec);
};

#endif
