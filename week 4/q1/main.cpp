// fill the missing code

#include<iostream>
#include"q1.cpp"
using namespace std;


int main() 
{ 
    int arr[5] = {1, 2, 3, 4, 5}; 
    Array <int> a(arr, 5); 
    char arr1[6] = {'q', 'w', 'e', 'r', 't','y'}; 
    Array <char> a1(arr1, 6); 
    a.print();
    a1.print(); 
    return 0; 
} 