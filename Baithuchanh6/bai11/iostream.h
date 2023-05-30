#ifndef PRINTTEXT_H
#define PRINTTEXT_H

#include <iostream>
using namespace std;
class Print
{
public:
    Print() { cout << "Entering the Hello program saying...\n"; }
    ~Print()
    {
        cout << "Exiting...\n";
    }
} Print_text;
#endif