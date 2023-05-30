#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <string>
#include <vector>
using namespace std;

class Candidate
{
private:
    string mssv;
    string ten;
    float diemToan, diemVan, diemAnh;

public:
    Candidate();
    Candidate(string mssv, string ten, int diemToan, int diemVan, int diemAnh);
    void Xuat();
    float TongDiem();
    string getTen();
    string getMssv();
    float getDiemToan();
    float getDiemVan();
    float getDiemAnh();
};

class TestCandidate : public Candidate
{
private:
    vector<Candidate> Candidates;

public:
    TestCandidate();
    void inPutCandiate();
    void XuatTongdiemLonHon15();
};

#endif
