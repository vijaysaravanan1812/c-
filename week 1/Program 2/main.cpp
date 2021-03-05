/*
Create a class Car that has two private data fields: integer liters and double consumption • Its default constructor should set those values to 40 and 0.1, respectively. It should also have a parameterized constructor to set those values. Both constructors should display messages that a car with the given features had been created • Its destructor should display a message that a car with the given features had been destroyed • It should have a double maxDistance() method, that will return the maximum distance that the car can travel on a single tank, calculated as liters/consumption.
*/


#include<iostream>
#include"car.cpp"

using namespace std;

int main()
{
    car c(20,0.1),c1;
    cout<<"Max distance of c is "<<c.max_distance()<<endl;
    cout<<"Max distance of c1 is "<<c1.max_distance()<<endl;
    return 0;
}