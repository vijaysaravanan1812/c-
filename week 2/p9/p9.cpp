//program to create a stack 

#include<iostream>
#include"p9.h"

using namespace std;

Stack ::Stack()
{
    top = -1;
}

void Stack::push(int data)
{
    if (top == MAX_VAL)
        cout<< "\n## Stack is Full!";
    else 
    {
        this->arr_stack[++top] = data;
    }
}


void Stack::pop()
{
    if (top < 0)
        cout<<"Stack is underflow\n";
    else
    {
        --top;
    }
}


void Stack::display()
{
    cout << "\n## Stack Size : " << top;
}


void Stack::peek()
{
    printf("Top value is\n");
    printf("%d \n",arr_stack[top]);
}
