#include "cmatrix.h"

CMatrix::CMatrix() {}

CMatrix::CMatrix(const std::vector<std::vector<double>> &elems) : elements(elems) {}

int CMatrix::rows() const
{
    return elements.size();
}

int CMatrix::columns() const
{
    if (rows() > 0)
    {
        return elements[0].size();
    }
    return 0;
}

double CMatrix::element(int row, int col) const
{
    if (row >= 0 && row < rows() && col >= 0 && col < columns())
    {
        return elements[row][col];
    }
    return 0.0;
}

CVector CMatrix::operator*(const CVector &vec) const
{
    int numRows = rows();
    int numCols = columns();
    int vecDim = vec.chieukhonggian();

    if (numCols != vecDim)
    {
        throw std::invalid_argument("Matrix and vector chieukhonggians do not match.");
    }

    std::vector<double> resultElems(numRows, 0.0);

    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j < numCols; ++j)
        {
            resultElems[i] += element(i, j) * vec.element(j);
        }
    }

    return CVector(resultElems);
}

CMatrix CMatrix::operator*(const CMatrix &other) const
{
    int numRowsA = rows();
    int numColsA = columns();
    int numRowsB = other.rows();
    int numColsB = other.columns();

    if (numColsA != numRowsB)
    {
        std::cout << "Không hợp lệ vui lòng nhập ma trận khác";
        return;
    }
    std::vector<std::vector<double>> resultElems(numRowsA, std::vector<double>(numColsB, 0.0));
    for (int i = 0; i < numRowsA; ++i)
    {
        for (int j = 0; j < numColsB; ++j)
        {
            for (int k = 0; k < numColsA; ++k)
            {
                resultElems[i][j] += element(i, k) * other.element(k, j);
            }
        }
    }

    return CMatrix(resultElems);
}

std::ostream &operator<<(std::ostream &os, const CMatrix &mat)
{
    int numRows = mat.rows();
    int numCols = mat.columns();

    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j < numCols; ++j)
        {
            os << mat.element(i, j) << " ";
        }
        os << "\n";
    }

    return os;
}
