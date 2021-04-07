
#include<iostream>

using namespace std;
//implement generic stack 

template <typename T >


class Stack
{
private:
    T *arr;
    int size;
    T top;
public:
    Stack();
    Stack(int size);
    T peek();
    T pop();
    T push(T element);
    bool isempty();
};
