#ifndef CMATRIX_H
#define CMATRIX_H

#include <iostream>
#include <vector>
#include "cvector.h" // Sử dụng lớp CVector

class CMatrix
{
private:
    std::vector<std::vector<double>> elements; // Lưu trữ các thành phần của ma trận

public:
    CMatrix();
    CMatrix(const std::vector<std::vector<double>> &elems);

    int rows() const;
    int columns() const;
    double element(int row, int col) const;

    CVector operator*(const CVector &vec) const;
    CMatrix operator*(const CMatrix &other) const;
    friend std::ostream &operator<<(std::ostream &os, const CMatrix &mat);
};

#endif // CMATRIX_H
