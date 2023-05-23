#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
class Point
{
private:
    double x, y;

public:
    Point()
    {
        cout << "Ham da duoc tao";
    }
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    ~Point()
    {
        cout << "Ham da duoc huy";
    }
    void setX(double x)
    {
        this->x = x;
    }
    void setY(double y)
    {
        this->y = y;
    }
    double getX()
    {
        return this->x;
    }
    double getY()
    {
        return this->y;
    }
    void TinhTien(double x, double y)
    {
        setX(this->getX() + x);
        setY(this->getY() + y);
    }
    void PhongTo(double k)
    {
        this->x *= k;
        this->y *= k;
    }
    void ThuNho(double k)
    {
        this->x /= k;
        this->y /= k;
    }
    double DoDai()
    {
        return sqrt(this->getX() * this->getX() + this->getY() * this->getY());
    }
    void quay(double deg)
    {
        this->TinhTien(this->getX() * cos(deg) - this->getY() * sin(deg), this->getX() * sin(deg) + this->getY() * cos(deg));
    }
    void input()
    {
        double x, y;

        cin >> x >> y;
        setX(x);
        setY(y);
    }
    void output()
    {
        cout << this->getX() << " " << this->getY() << "\n";
    }
};
