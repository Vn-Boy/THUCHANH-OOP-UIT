#include "header.h"

class SoPhuc
{
private:
    int a1, a2, b1, b2;

public:
    SoPhuc()
    {
    }
    SoPhuc(int a1, int a2, int b1, int b2)
    {
        this->a1 = a1;
        this->a2 = a2;
        this->b1 = b1;
        this->b2 = b2;
    }
    void getA1A2(int a1, int a2)
    {
        this->a1 = a1;
        this->a2 = a2;
    }
    void getB1B2(int b1, int b2)
    {
        this->b1 = b1;
        this->b2 = b2;
    }
    void RutGonSoPhuc(int a, int b, int c, int d)
    {

        int gcd1 = __gcd(a, b);
        int gcd2 = __gcd(c, d);
        a = a / gcd1;
        b = b / gcd1;
        c = c / gcd2;
        d = d / gcd2;
        if (abs(a) == 1 && abs(b) == 1)
            ;
        else if (a < 0 || b < 0)
        {
            a = -abs(a);
            b = abs(b);
        }
        else
        {

            a = abs(a);
            b = abs(b);
        }
        if (abs(c) == 1 && abs(d) == 1)
            ;
        else if (c < 0 || d < 0)
        {
            c = -abs(c);
            d = abs(d);
        }
        else
        {

            c = abs(c);
            d = abs(d);
        }
        if ((b == 1 && a == 1) || (c == 1 && d == 1))
        {
            if ((b == 1 && a == 1) && (c != 1 && d != 1))
            {
                cout << 1 << " + " << c << "/" << d << "\n";
                return;
            }
            else if ((c == 1 && d == 1) && (a != 1 && b != 1))
            {
                cout << a << "/" << b << " + "
                     << "i\n";
                return;
            }
            else if ((b == 1 && a == 1) && (c == 1 && d == 1))
            {
                cout << 1 << " + "
                     << "i\n";
                return;
            }
        }
        else if (b == 1 || d == 1 || a == 0 || c == 0)
        {
            if (a != 0 && c != 0)
            {
                if (b == 1 && d != 1)
                {
                    cout << a << " + " << c << "/" << d << "i\n";
                }
                else if (d == 1 && b != 1)
                {
                    cout << a << "/" << b << " + " << c << "i\n";
                }
                else if (b == 1 && d == 1)
                {
                    cout << a << " + " << c << "i\n";
                }
            }
            else if (a == 0 && c != 0)
            {
                if (d == 1)
                {
                    if (c == 1)
                        cout << 0 << " + "
                             << "i\n";
                    else
                        cout << 0 << " + " << c << "i\n";
                }
                else
                {
                    cout << 0 << " + " << c << "/" << d << "i\n";
                }
            }
            else if (a != 0 && c == 0)
            {
                if (b == 1)
                {
                    cout << a << " + "
                         << "0i\n";
                }
                else
                {
                    cout << a << "/" << b << " + "
                         << "0i\n";
                }
            }
            else if (a == 0 && b == 0)
            {
                cout << 0 << " + " << 0 << "\n";
            }
        }
        else
        {
            cout << a << "/" << b << " + " << c << "/" << d << "i\n";
        }

        ;
    }
    void CongHaiSoPhuc()
    {

        cout << this->a1 + this->b1 << " + " << this->a2 + this->b2 << "i\n";
    }
    void TruHaiSoPhuc()
    {

        cout << this->a1 - this->b1 << " + " << this->a2 - this->b2 << "i\n";
    }
    void NhanHaiSoPhuc()
    {

        cout << this->a1 * this->b1 - this->a2 * this->b2 << " + " << this->a1 * this->b1 + this->a2 * this->b2 << "i"
             << "\n";
    }
    void ChiaHaiSoPhuc()
    {
        RutGonSoPhuc(this->a1 * this->b1 - this->a2 * this->b2, (this->b1) * (this->b1) + (this->b2) * (this->b2), this->a1 * this->b1 + this->a2 * this->b2, (this->b1) * (this->b1) + (this->b2) * (this->b2));
    }
};
