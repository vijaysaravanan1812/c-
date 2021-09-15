/*
Create a class Car that has two private data fields: integer liters and double consumption • Its default constructor should set those values to 40 and 0.1, respectively. It should also have a parameterized constructor to set those values. Both constructors should display messages that a car with the given features had been created • Its destructor should display a message that a car with the given features had been destroyed • It should have a double maxDistance() method, that will return the maximum distance that the car can travel on a single tank, calculated as liters/consumption.
*/

class car
{
private:
    int liters;
    double consumption;
public:
    car();
    car(int liter,double consumption);
    ~car();
    double max_distance();

};

