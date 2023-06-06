class Shape
{
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Ellipse : public Shape
{
protected:
    double a;
    double b;

public:
    Ellipse(double a, double b)
    {
        this->a = a;
        this->b = b;
    }
    double getArea() override
    {
        return PI * a * b;
    }
    double getPerimeter() override
    {
        return 2 * PI * sqrt((a * a + b * b) / 2);
    }
};

class Circle : public Ellipse
{
public:
    Circle(double r) : Ellipse(r, r) {}
};
class ShapeManager
{
public:
    Shape *createShape()
    {
        int choice;
        cin >> choice;

        Shape *shape;

        switch (choice)
        {
        case 1:
        {
            double a, b;
            cin >> a;
            cin >> b;

            shape = new Ellipse(a, b);
            break;
        }
        case 2:
        {
            double r;

            cin >> r;

            shape = new Circle(r);
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
        cout << "Dientich: " << shape->getArea() << endl;
        cout << "Chuvi: " << shape->getPerimeter() << endl;
        delete shape;
    }

    return 0;
}
