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
#include"q2.cpp"

using namespace std;


int main()
{
    string1 s;
    string1 s1("ghijklmno\0");
    string1 s2("abcdef\0");
    string1 s3(s1, s2);
    string1 s4(s2);
    string1 s5("");
    printf("\nreverse the string\n");
    rev_str(s1,s5);
    rev_str(s1);
    //s = s1;
    getchar();
}
