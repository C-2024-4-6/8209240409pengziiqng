#include <iostream>
#include"student.h" 
#include"string.h"
using namespace std;
void Student::set_value(int n,const char* nm, char s)
{
    num =n;
    strncpy_s (name, nm, 19); 
    name[19] = '\0';
    sex = s;
};
void Student::display()
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
};