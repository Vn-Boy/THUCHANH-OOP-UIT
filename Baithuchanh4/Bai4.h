#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
class DaThuc
{
private:
    int n;
    vector<pair<double, double>> heso;
public:
    DaThuc()
    {
    }
    ~DaThuc()
    {
    }
    DaThuc(int n)
    {
        this->n = n;
        for (int i = 0; i < n; i++)
        {
            cin >> this->heso[i].first >> this->heso[i].second;
        }
    }
    vector<pair<double, double>> getVector()
    {
        return this->heso;
    };
    double NhapGiaTriX(double x)
    {
        double result = 0;
        for (int i = 0; i < this->n; i++)
        {
            result = result + this->heso[i].first * pow(x, this->heso[i].second);
        }
        return result;
    }
    void setValueVector(double value, int i)
    {
        this->heso[i].first = value;
    }
    int getN()
    {
        return this->n;
    }
    void CongDaThuc(DaThuc &dathuc)
    {
        int n = min(getN(), dathuc.getN());
        for (int i = 0; i < n; i++)
        {
            if (getVector()[i].second == dathuc.getVector()[i].second)
            {
                setValueVector(getVector()[i].first + dathuc.getVector()[i].first, i);
            }
        }
    }
    void TruDaThuc(DaThuc &dathuc)
    {
        int n = min(getN(), dathuc.getN());
        for (int i = 0; i < n; i++)
        {
            if (getVector()[i].second == dathuc.getVector()[i].second)
            {
                setValueVector(getVector()[i].first - dathuc.getVector()[i].first, i);
            }
        }
    }
    DaThuc nhan(DaThuc &dathuc)
    {
        int n1 = getN();
        int n2 = dathuc.getN();
        DaThuc result;
        result.heso = {};

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                double giatri = getVector()[i].first * dathuc.getVector()[j].first;
                double somu = getVector()[i].second + dathuc.getVector()[j].second;
                bool added = false;
                for (int k = 0; k < result.heso.size(); k++)
                {
                    if (result.getVector()[k].second == somu)
                    {
                        result.getVector()[k].first += giatri;
                        added = true;
                        break;
                    }
                }
                if (!added)
                    result.heso.push_back(make_pair(giatri, somu));
            }
        };
        return result;
    }
    DaThuc DaoHam(DaThuc &dathuc)
    {
        DaThuc result;
        for (int i = 0; i < dathuc.getN(); i++)
        {
            double somu = dathuc.getVector()[i].second - 1;
            double giatri = dathuc.getVector()[i].first * dathuc.getVector()[i].second;
            result.heso.push_back(make_pair(giatri, somu));
        }
        return result;
    }
};
int main()
{
    int n;
    cin >> n;
    DaThuc m(n);

}