// fill the missing code

#include<iostream>
#include"q1.h"
using namespace std;




template <typename T> 
Array<T>::Array(T arr[], int s)
{ 
    ptr = new T[s];
    ptr = arr;
    size = s;
} 

template <typename T> 
void Array<T>::print() 
{ 
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i]<<" ";
    }
     printf("\n");
} 