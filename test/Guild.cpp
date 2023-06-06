#include <iostream>
#include <string>
using namespace std;
class Guilde
{
protected:
    double HP;
    double ATK;
    double DEF;

public:
    Guilde(double HP, double ATK, double DEF)
    {
        this->HP = HP;
        this->ATK = ATK;
        this->DEF = DEF;
    }
    void attack()
    {
        cout << ATK << DEF;
    }
};

class NhanLoai : public Guilde
{
private:
    string thongtinthem;

protected:
    string job_class;

public:
    NhanLoai(string job_class, double HP, double ATK, double DEF, string thongtinthem = "") : Guilde(HP, ATK, DEF)
    {
        this->job_class = job_class;
        this->thongtinthem = thongtinthem;
        if (job_class == "Elf")
        {
            this->DEF = DEF * 0.5 + DEF;
        }
    }
};
class BanNhan : public Guilde
{
private:
    string thongtinthem;

protected:
    string racial_class;

public:
    BanNhan(string racial_class, double HP, double ATK, double DEF, string thongtinthem = "") : Guilde(HP, ATK, DEF)
    {
        this->racial_class = racial_class;
        this->thongtinthem = thongtinthem;
        if (racial_class == "Orc")
        {
            this->HP = HP * 0.5 + HP;
        }
        if (racial_class == "Golbin")
        {
            this->ATK = ATK * 0.1 + ATK;
        }
    }
};
class DiHinh : public Guilde
{
public:
    DiHinh(double HP, double ATK, double DEF) : Guilde(HP, ATK, DEF)
    {
    }
};
int main()
{
    Guilde *pp = new BanNhan("Orc", 100, 100, 100);
    pp->attack();
}