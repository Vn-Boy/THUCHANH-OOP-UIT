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

    // Phép gán
    INTEGER &operator=(int val);
    INTEGER &operator=(const INTEGER &other);

    // Phép chuyển đổi kiểu ngầm định
    operator int() const;

    // Các phép toán số học
    INTEGER operator+(const INTEGER &other) const;
    INTEGER operator-(const INTEGER &other) const;
    INTEGER operator*(const INTEGER &other) const;
    INTEGER operator/(const INTEGER &other) const;
    INTEGER operator%(const INTEGER &other) const;

    // Các phép toán so sánh
    bool operator==(const INTEGER &other) const;
    bool operator!=(const INTEGER &other) const;
    bool operator<(const INTEGER &other) const;
    bool operator<=(const INTEGER &other) const;
    bool operator>(const INTEGER &other) const;
    bool operator>=(const INTEGER &other) const;

    // Các phép toán tăng/giảm giá trị
    INTEGER &operator++();   // Tiền tố ++
    INTEGER operator++(int); // Hậu tố ++
    INTEGER &operator--();   // Tiền tố --
    INTEGER operator--(int); // Hậu tố --

    // Xuất nhập dữ liệu
    friend std::ostream &operator<<(std::ostream &os, const INTEGER &num);
    friend std::istream &operator>>(std::istream &is, INTEGER &num);
};

#endif // INTEGER_H
