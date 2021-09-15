#include<iostream>
#include "SplayTreeDefinitions.cpp"

using namespace std;
int main(){
	Splay<int> a;
	int choice,ch=1;
    int e;
	do{
		
		cout<<"\n1.To Insert \n2.To Pre-order display \n4.To exit\nEnter your choice:";
		cin>>choice;
		switch(choice){
			case 1:	cout<<"\nEnter a number to be inserted:";
					cin>>e;
					a.insert(e);
					cout<<"\nElement Inserted!\n";
					break;
			case 2: cout<<"\nThe splay tree:";
					a.display();
					getchar();
					break;
			case 4:ch=0;
					break;
			default: cout<<"\n\nInvalid Case!!";
			

		}
		getchar();
	}while(ch!=0);
	
    
	return 0;
}