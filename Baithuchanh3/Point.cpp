#include "Point.h"
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

Point::Point()
{
    cout << "Ham da duoc tao";
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{
    cout << "Ham da duoc huy";
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::getX()
{
    return this->x;
}

double Point::getY()
{
    return this->y;
}

void Point::TinhTien(double x, double y)
{
    setX(this->getX() + x);
    setY(this->getY() + y);
}

void Point::PhongTo(double k)
{
    this->x *= k;
    this->y *= k;
}

void Point::ThuNho(double k)
{
    this->x /= k;
    this->y /= k;
}

double Point::DoDai()
{
    return sqrt(this->getX() * this->getX() + this->getY() * this->getY());
}

void Point::quay(double deg)
{
    this->TinhTien(this->getX() * cos(deg) - this->getY() * sin(deg), this->getX() * sin(deg) + this->getY() * cos(deg));
}

void Point::input()
{
    double x, y;
    cin >> x >> y;
    setX(x);
    setY(y);
}

void Point::output()
{
    cout << this->getX() << " " << this->getY() << "\n";
}
