#ifndef PERSON_H
#define PERSON_H
class Person
{
public:
    string name;
    int age;
    Person(string name, int age);
    virtual void printInfo() = 0;
};

#endif