#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double x, y;

public:
    Point();
    Point(double x, double y);
    ~Point();
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
    void TinhTien(double x, double y);
    void PhongTo(double k);
    void ThuNho(double k);
    double DoDai();
    void quay(double deg);
    void input();
    void output();
};

#endif
