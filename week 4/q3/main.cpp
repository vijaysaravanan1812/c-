//implement the stack 

#include<iostream>
#include"q3.cpp"

using namespace std;

int main()
{
    Stack <char> a(5);
    a.push('b');
    a.push('a');
    printf("top element is %d\n",a.peek());
    a.push('r');
    a.push('y');
    a.push('A');

    printf("top element is %d \n",a.peek());
    a.push('w');
    printf("%d \n",a.isempty());
    printf("top element is %d \n",a.peek());
    a.push('p');
    printf("top element is %d \n",a.peek());
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    printf("%d \n",a.isempty());
    return 0;
}