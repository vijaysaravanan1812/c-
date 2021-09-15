/*
Create a class Car that has two private data fields: integer liters and double consumption • Its default constructor should set those values to 40 and 0.1, respectively. It should also have a parameterized constructor to set those values. Both constructors should display messages that a car with the given features had been created • Its destructor should display a message that a car with the given features had been destroyed • It should have a double maxDistance() method, that will return the maximum distance that the car can travel on a single tank, calculated as liters/consumption.
*/

#include<iostream>
#include"car.h"

using namespace std;

car::car()
{
    liters = 40;
    consumption = 0.1;
    cout<<"A car with the given features had been created\n";
}

car::~car()
{
    cout<<"\nA car with the given features had been destroyed \n";
}

car::car(int liter,double consumption)
{
    this->liters = liter;
    this->consumption = consumption;
}

double car::max_distance()
{
    double maxdistance = liters/consumption;
    return maxdistance;   
}

