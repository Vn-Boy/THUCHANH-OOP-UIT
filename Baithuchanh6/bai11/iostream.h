#ifndef PRINTTEXT_H
#define PRINTTEXT_H

#include <iostream>
using namespace std;
class PrintText
{
public:
    PrintText() { cout << "Entering the Hello program saying...\n"; }
    ~PrintText()
    {
        cout << "Exiting...\n";
    }
} Print_text;
#endif // PRINTTEXT_H