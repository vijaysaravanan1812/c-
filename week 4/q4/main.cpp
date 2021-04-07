//program to implement the queue

#include<iostream>
#include"q4.cpp"

using namespace std;

int main()
{
    queue <char> a(5);
    a.enqueue('a');//dequeue
    a.enqueue('b');//dequeue
    a.enqueue('c');//dequeue
    a.enqueue('d'); 
    a.enqueue('e');
    a.enqueue('f');
    a.print();
}