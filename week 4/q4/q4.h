//program to implement circular queue

#include<iostream>

using namespace std;

template <typename T>
class queue
{
private:
    T *arr;
    int size;
    int front ;int rear;int count;
public:
    queue(int size);
    queue();
    T enqueue(T element);
    T dequeue();
    void print();
    bool isempty();
};


