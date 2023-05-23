#ifndef STRING_H
#define STRING_H

class String
{
private:
    char *str;

public:
    String();
    ~String();
    int length();
    void concat(String &s);
    void reverse();
    void copy(char *s);
    void input();
    void output();
};
#endif