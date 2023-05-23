#include "String.h"
#include <iostream>
using namespace std;
String::String()
{
    str = new char[1];
    str[0] = '\0';
}
String::~String()
{
    delete[] str;
}
int String::length()
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}
void String::concat(String &s)
{
    char *temp = new char[length() + s.length() + 1];
    for (int i = 0; i < length(); i++)
    {
        temp[i] = str[i];
    }
    for (int i = length(); i < length() + s.length(); i++)
    {
        temp[i] = s.str[i];
    }
    temp[length()] = '\0';
    str = temp;
}
void String::copy(char *s)
{
    str = s;
}
void String::reverse()
{
    for (int i = 0; i < length() / 2; i++)
    {
        swap(str[i], str[length() - i - 1]);
    }
}
void String::input()
{
    delete[] str;
    int capacity = 10;
    str = new char[capacity];
    int len = 0;
    char c = cin.get();
    while (c != '\n')
    {
        if (len == capacity - 1)
        {
            capacity *= 2;
            char *temp = new char[capacity];
            for (int i = 0; i < len; i++)
                temp[i] = str[i];
            delete[] str;
            copy(temp);
        }
        str[len++] = c;
        c = cin.get();
    }
    str[len] = '\0';
}
void String::output()
{
    cout << str;
}
int main()
{
    String n;
    n.input();
    n.output();
    char *varible = "test hello world 113";
    n.copy(varible);
    n.output();
}
