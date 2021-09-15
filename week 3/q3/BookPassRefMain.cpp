#include <iostream>
#include "BookPassRefDefinitions.cpp"
#include <string>
using namespace std;

int main()
{	
	cout << "Enter the price of the book : ";
	double price; // price 
	cin >> price;
	cout << "Enter the quantity of the book : ";
	int quantity;
	cin >> quantity;
	Author JK_Rowling("J.K. Rowling","JKRowling@BloomsburryPublications.com",'f'); //object JK_rowling 
	Book Harry_Potter("Harry Potter : The Chamber of Secrets",JK_Rowling,price,quantity);
	
	Harry_Potter.print();

	Book HP("Harry Potter : The Prisoner of Azkaban",JK_Rowling,-599,-10);
	//cout << HP.getPrice() << endl;
	//cout << HP.getQtyInStock() << endl;

}

