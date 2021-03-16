//program to create a stack
#include<iostream>
#include"p9.cpp"

using namespace std;


int main() 
{
    int choice, exit_p = 1;
    int element;
    Stack obj;
    cout << "\nSimple Stack Example - Class and Member Functions - C++";
    do {
        cout << "\n\nStack Main Menu";

        cout << "\n1.Push \n2.Pop \n3.Display \n4.peek \nOthers to exit";
        cout << "\nEnter Your Choice : ";
        cin>>choice;
        switch (choice) {
            case 1:
                printf("Enter the value\n");
                scanf("%d",&element);
                obj.push(element);
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                obj.peek();
                break;
            default:
                exit_p = 0;
                break;
        }
    } while (exit_p);

    return 0;
}
