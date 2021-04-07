//implement the genric stack 

#include<iostream>
#include"q3.h"
using namespace std;


template <typename T>
Stack<T>::Stack(int size)
{
    this->arr = new T[size];
    this->size = size;
    this->top = -1;
}

template <typename T>
Stack<T>::Stack()
{
    this->size = 100;
    this->arr = new T[size];
    
    this->top = -1;
}

template <typename T>
T Stack<T>::push(T element)
{
    if (top + 1 >= this->size)
        printf("Stack is full\n");
    else{
        
        this->arr[++(this->top)] = element;
        printf("top %d\n",top);
    }
}

template <typename T>
T Stack<T>::pop()
{
    T element;
    if(top == -1)
        printf("Stack is underflow\n");
    else 
    {
        element = this->arr[this->top];
        --(this->top);
        return element;
    }
    
}

template <typename T>
T Stack<T>::peek()
{
    return this->arr[this->top];
}

template <typename T>
bool Stack<T>::isempty()
{
    if (this->top == -1)
        return true;
    else 
        return false;
}