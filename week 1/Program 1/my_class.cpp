//Write a program with class my_class with an integer data member a,
//a default constructor, a parameterized constructor, a destructor
// and a function member that displays the value of a.

#include<iostream>
#include"my_class.h"

using namespace std;

my_class ::my_class()
{
    cout<<"CONSTRUCTOR\n";
}


void my_class::display()
{
    cout<<"A = "<<a<<endl;
}


