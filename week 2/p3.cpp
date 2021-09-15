//Question 3 
//Predict the output of following programs. If there are compilation errors, then fix them

#include<iostream> 
using namespace std; 
  
int &fun() 
{ 
    int x = 10;
    return x; 
} 
int main() 
{ 
    fun() = 30; 
    cout << fun(); 
    return 0; 
} 
