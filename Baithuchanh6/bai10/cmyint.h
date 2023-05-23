#ifndef MYINT_H
#define MYINT_H

class MYINT
{
private:
    int value;

public:
    MYINT();
    MYINT(int val);

    MYINT operator+(const MYINT &other) const;
    MYINT operator-(const MYINT &other) const;

    operator int() const;
};

#endif // MYINT_H
