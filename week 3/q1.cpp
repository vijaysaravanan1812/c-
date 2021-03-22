//Question 1

//Fill the missing code and make it work
#include <iostream>
using namespace std;

// forward declaration
//------------------;
class B;
class A {
    private:
      int numA;
    public:
      A(): numA(12) { }
      friend int add(A a,B b);
      // friend function declaration
      //---------------------------;
};

class B {
    private:
       int numB;
    public:
       B(): numB(1) { }
       friend int add(A a,B b);
       // friend function declaration
       //----------------------------------;
};


int add(A a, B b)
{
    int sum = a.numA + b.numB;
    return sum;
}

//  Define the function add() as the friend function of classes A and B
// that accesses the member variables numA and numB

int main()
{
    A a;B b;
    int sum = add(a,b);
    printf("%d \n",sum);
    return 0;


}