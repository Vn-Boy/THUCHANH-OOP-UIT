#include "PerSon.cpp"
int main()
{
    QuanLyPerson ql;
    ql.addPerson(new Student("Alice", 20, "Harvard"));
    ql.addPerson(new Worker("Bob", 30, "Microsoft"));
    ql.addPerson(new Artist("Charlie", 40, "Painting"));
    ql.addPerson(new Singer("Dave", 50, "Pop"));
    ql.printInfoPerson();
    return 0;
}