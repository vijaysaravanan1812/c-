//program to implement the stack

#include<iostream>
#include"q4.h"

using namespace std;

template <typename T>
queue<T>::queue()
{
    this->arr = new T[100];
    this->front = this->rear = -1;
}

template <typename T>
queue<T>::queue(int size)
{
    this->size = size;
    this->arr = new T[this->size];
    this->front = this->rear = -1;
}

template <typename T>
T queue<T>::enqueue(T element)
{
    if (front == -1 && rear == -1)
    {
        front = 0; rear = 0;
    }
    else if( (rear + 1) % size == front)
        printf("Queue is full\n");
    else
        rear = (rear + 1)%size;

    arr[rear] = element;
}

template <typename T>
T queue<T>::dequeue()
{
    if (front == -1 && rear == -1)
        cout<<"Queue is underflow\n";
    else if (front == rear)
        front = rear = -1;
    else
        front = (front + 1)%size;

}

template <typename T>
bool queue<T>::isempty()
{
    if(front == -1 && rear == -1)
        return true;
    else 
        return false;    
}

template <typename T>
void queue<T>::print()
{
    if (front == -1 && rear == -1)
        printf("Nothing to print\n");
    else
    {
            int i = front;
            while (1)
            {
            
                cout<<arr[i]<<" ";
                if (i == rear)
                    break;
                
                i = (i + 1) % size; 
            }
            printf("\n");
    }
}
