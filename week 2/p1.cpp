//Predict the output of following programs. If there are compilation errors, then fix them.
//Question 1
#include<iostream> 
using namespace std; 
  
int fun(int &x) 
{ 
    return x; 
} 
int main() 
{ 

    //cout << fun(10);  error
    int a = 10;
    cout << fun(a); 
    return 0; 
} 
