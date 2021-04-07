//program to overload the operator

#include<iostream>
#include"program.cpp"

using namespace std;

int main()
{
    rational r1(2,3),r2(5,3),r3(2,5),r4(2,6),r5,r6;
    cout<<"r1 = "<<r1<<" r2 = "<<r2<<" r3 =  "<<r3<<" r4 =  "<<r4<<"\n";
    cout<<r1<<" + "<<r2<<" = \t";
    r5 = r1 + r2;
    cout<<r5<<"\n";
    rational r8;
    cout<<r1<<" * "<<r2<<" = \t";
    r8 = r1 * r2;
    cout<<r8<<"\n";
    cout<<r3<<" - "<<r4<<" = \t";
    r6 = r3 - r4;
    cout<<r6<<"\n";
    cout<<r5<<" / "<<r6<<" = "<<"\t";
    rational r7;
    r7 = r5/r6;
    cout<<r7<<"\n";


    return 0;
}