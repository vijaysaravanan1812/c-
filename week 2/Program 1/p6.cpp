#include <stdio.h> 
   
int main(void) 
{ 
    int i = 10; 
    int j = 20; 
    const int *const ptr = &i;        /* constant pointer to constant integer */
   
    printf("ptr: %d\n", *ptr); 
   
    //ptr = &j;     //error we cannot change the address of variable that points by constant pointer to constant pointer      
    //*ptr = 100;       //  error we cannot change the value 
    return 0; 
} 
