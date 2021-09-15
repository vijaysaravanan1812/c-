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
#include"q2.h"
#include<string.h>
using namespace std;

string1::string1(char *p)
{
    cout<<"\nThe string:"<<p;
    size = strlen(p) ; 
    str = new char[size + 1];
    strcpy(str,p);
    cout<<"\nThe length of the string is:"<<strlen(p);
}
string1::string1(string1 &s1,string1 &s2)
{
    //cout<<"\nThe string:"<<str;
    size = strlen(s1.str) + strlen(s2.str); 
    
    str = new char[size + 1];
    strcpy(str,s1.str);
    cout<<"\n"<<strcat(str,s2.str);
}
                           
string1::string1 (string1 &s)
{
    size = strlen(s.str);
    str = new char[size +1];   
    strcpy(str, s.str);  
    cout<<"\nThe string:"<<str;
    cout<<"\nThe length of the string is:"<<strlen(str);          
}

        
string1::~string1()
{ 
    cout<< "destructing" << endl ;
    delete [] str;
}

string1 rev_str(string1 &s1)
{
    int i = 0,j = s1.size - 1;
    while (i < j)
    {
        char temp;
        temp = s1.str[i];
        s1.str[i] = s1.str[j];
        s1.str[j] = temp;
        i++;j--;
    }
    printf("reverse of s1 %s",s1.str);
    return s1;   
}
      
string1 rev_str(string1 &s1, string1 &s2)
{
    int i = 0,j = s1.size - 1,len = j; 
    printf("%s",s1.str);
    while (i <= len )
    {
        s2.str[i++] = s1.str[j--];
    }
    s2.str[i] = '\0';
    
    printf("reverse of s1 %s",s2.str);
    return s2;

}
