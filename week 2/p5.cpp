//predict the error and comment the reason for error 

#include<iostream>
using namespace std;

int main() 
{ 
    int i = 10;    
    int j = 20; 
    const int *ptr = &i;    /* ptr is pointer to constant */
    //i = 05; // from this we can change  
    printf("ptr: %d\n", *ptr);  
   // *ptr = 100;       // we cannot change the value  

   
    ptr = &j;         
    printf("ptr: %d\n", *ptr); 
   
    return 0; 
} 
