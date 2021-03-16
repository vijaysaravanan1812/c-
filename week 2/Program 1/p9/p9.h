//program to create a stack

#define MAX_VAL 5
class Stack 
{
    private:
        int item;
        int arr_stack[MAX_VAL];
        int top;
    public:
        Stack();
    void push(int data);
    void pop(); 
    void display(); 
    void peek();
};
  