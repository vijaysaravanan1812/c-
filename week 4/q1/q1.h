
//fill the missing code 

#include <iostream> 
using namespace std;    

template <typename T> //Initializing templets
class Array 
{ 
    private: 
        T *ptr; 
        int size; 
    public: 
        Array(T arr[], int s); 
        void  print(); 
}; 
