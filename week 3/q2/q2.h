/*
Question 2
Create a class called string with data members as character array 
and length. Define friend function called rev_str() that reverses 
a string. Overload rev_str() so that it can be called with either 
one character array or two. When it is called with one string,
have that one string contain the reversed string. When it 
is called with two strings return the reversed string in the second argument.


Use the following code to construct strings which was given for u as class
exercise and continue for the above question.*/

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class string1
{
    char *str;
    int size;
    public:
        string1() : str(NULL),  size(0) { }
        string1(char *p);
        string1(string1 &s1,string1 &s2);
        string1 (string1 &s);
             
        ~string1();
       
        friend string1 rev_str (string1 &s1);
	    friend string1 rev_str(string1 &s1, string1 &s2 );
                    
};
