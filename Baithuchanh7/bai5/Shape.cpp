#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void printInfo() = 0;
};

class HinhThang : public Shape
{
protected:
    double a;
    double b;
    double h;

public:
    HinhThang(double a, double b, double h)
    {
        this->a = a;
        this->b = b;
        this->h = h;
    }
    double getArea()
    {
        return (a + b) * h / 2;
    }
    void printInfo() override
    {
        cout << "HinhThang" << endl;
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "h: " << h << endl;
        cout << "DienTich: " << getArea() << endl;
    }
};

class HinhBinhThanh : public Shape
{
protected:
    double a;
    double h;

public:
    HinhBinhThanh(double a, double h)
    {
        this->a = a;
        this->h = h;
    }
    double getArea()
    {
        return a * h;
    }
    void printInfo() override
    {
        cout << "HinhBinhThanh" << endl;
        cout << "a: " << a << endl;
        cout << "h: " << h << endl;
        cout << "Area: " << getArea() << endl;
    }
};

class HinhChuNhat : public HinhBinhThanh
{
public:
    HinhChuNhat(double a, double b) : HinhBinhThanh(a, b) {}
    void printInfo() override
    {
        cout << "HinhChuNhat" << endl;
        cout << "a: " << a << endl;
        cout << "b: " << h << endl;
        cout << "DienTich: " << getArea() << endl;
    }
};

class HinhVuong : public HinhChuNhat
{
public:
    HinhVuong(double a) : HinhChuNhat(a, a) {}
    void printInfo() override
    {
        cout << "HinhVuong" << endl;
        cout << "a: " << a << endl;
        cout << "DienTich: " << getArea() << endl;
    }
};

class ShapeManager
{
public:
    Shape *createShape()
    {
        int choice;
        cout << "1: HinhThang, 2:HinhBinhThanh, 3:HinhChuNhat, 4:HinhVuong ";
        cin >> choice;

        Shape *shape;

        switch (choice)
        {
        case 1:
        {
            double a, b, h;

            cin >> a;

            cin >> b;

            cin >> h;

            shape = new HinhThang(a, b, h);
            break;
        }
        case 2:
        {
            double a, h;

            cin >> a;

            cin >> h;

            shape = new HinhBinhThanh(a, h);
            break;
        }
        case 3:
        {
            double a, b;

            cin >> a;

            cin >> b;

            shape = new HinhChuNhat(a, b);
            break;
        }
        case 4:
        {
            double a;

            cin >> a;

            shape = new HinhVuong(a);
            break;
        }
        default:
            return nullptr;
        }

        return shape;
    }
};

int main()
{

    ShapeManager manager;

    Shape *shape = manager.createShape();
    if (shape != nullptr)
    {
        shape->printInfo();
        delete shape;
    }

    return 0;
}
