// Overload the +, -, /, * operators

#include<iostream>
#include"program.h"

using namespace std;

rational::rational(float numerator,float denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}

rational::rational()
{
    this->denominator = 1;
    this->numerator = 0;
}

rational rational::operator+(rational a)
{
    if (this->denominator == a.denominator)
    {
        return rational((this->numerator + a.numerator) , denominator);
    }
    else
    {
        return rational( (this->numerator)*a.denominator + (a.numerator)*this->denominator ,(a.denominator * this->denominator));
    }
    
}

rational rational::operator*(rational a)
{
    return rational((this->numerator * a.numerator) , (this->denominator * a.denominator));
}

rational rational::operator-(rational a)
{
    if (this->denominator == a.denominator)
    {
        return rational((this->numerator - a.numerator),denominator);
    }
    else
    {
        return rational((this->numerator)*a.denominator - (a.numerator)*this->denominator , (a.denominator * this->denominator));
    }
    
}

rational rational::operator/(rational a)
{
    return rational((this->numerator * a.denominator) , (this->denominator * a.numerator)); 
}

rational rational::operator=(rational a)
{
    this ->numerator = a.numerator;
    this->denominator = a.denominator;
}

istream& operator>>(istream& cin, rational a)
{
    cout<<"Numerator ? \t";
    cin>>a.numerator;
    cout<<"Denominator ? \t";
    cin>>a.denominator;
}

ostream& operator<<(ostream& cout, rational a)
{
    cout<<a.numerator<<"/"<<a.denominator;
}