#include "PerSon.h"
#include <iostream>
using namespace std;
Person::Person(string name, int age)
{
    this->name = name;
    this->age = age;
}
void Person::printInfo()
{
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
}
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
class QuanLyPerson
{
public:
    Person **ds;
    int size;
    int count;

    QuanLyPerson()
    {
        size = 4;
        count = 0;
        ds = new Person *[size];
    }

    ~QuanLyPerson()
    {
        for (int i = 0; i < count; i++)
        {
            delete ds[i];
        }
        delete[] ds;
    }

    void addPerson(Person *person)
    {
        if (count == size)
        {
            size *= 2;
            Person **newDs = new Person *[size];
            for (int i = 0; i < count; i++)
            {
                newDs[i] = ds[i];
            }
            delete[] ds;
            ds = newDs;
        }
        ds[count] = person;
        count++;
    }

    void printInfoPerson()
    {
        for (int i = 0; i < count; i++)
        {
            ds[i]->printInfo();
        }
    }
};
