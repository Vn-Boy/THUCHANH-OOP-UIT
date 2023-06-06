#include "PerSon.cpp"
class Student : public Person
{
public:
    string school;
    Student(string name, int age, string school) : Person(name, age)
    {
        this->school = school;
    }
    void printInfo() override
    {
        Person::printInfo();
        cout << "School: " << school << endl;
    }
};

class Worker : public Person
{
public:
    string company;
    Worker(string name, int age, string company) : Person(name, age)
    {
        this->company = company;
    }
    void printInfo() override
    {
        Person::printInfo();
        cout << "Company: " << company << endl;
    }
};

class Artist : public Person
{
public:
    string artForm;
    Artist(string name, int age, string artForm) : Person(name, age)
    {
        this->artForm = artForm;
    }
    void printInfo() override
    {
        Person::printInfo();
        cout << "Art form: " << artForm << endl;
    }
};

class Singer : public Person
{
public:
    string genre;
    Singer(string name, int age, string genre) : Person(name, age)
    {
        this->genre = genre;
    }
    void printInfo() override
    {
        Person::printInfo();
        cout << "Genre: " << genre << endl;
    }
};
int main()
{
    QuanLyPerson ql;
    ql.addPerson(new Student("Tran Van A", 20, "HUST"));
    ql.addPerson(new Student("Alice", 20, "Harvard"));
    ql.addPerson(new Worker("Bob", 30, "Microsoft"));
    ql.addPerson(new Artist("Charlie", 40, "Painting"));
    ql.addPerson(new Singer("Dave", 50, "Pop"));
    ql.printInfoPerson();
}