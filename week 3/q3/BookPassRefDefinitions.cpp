#include <iostream>
#include "BookPassRef.h"
using namespace std;


// constructor for book class
Book::Book(const string & name, const Author &author, double price, int qtyInStock) : author(author)
{
	this->name = name;
	setPrice(price);
	setQtyInStock(qtyInStock);
}
//these function called from constructor 
void Book::setPrice(double price)
{
	if(price > 0)
		this->price = price;
	else
	{
		cout << "The price should be +ve!!\n";
		this->price = 0;
	}
}

void Book::setQtyInStock(int qtyInStock)
{
	if(qtyInStock < 0)
	{
		cout << "The qty can't be -ve\n";
		this->qtyInStock = 0;
	}
	else
	{
		this->qtyInStock=qtyInStock;
	}
}



//functions to get members of class
string Book::getName() const
{
	return name;
}

Author Book::getAuthor() const
{
	return author;
}

double Book::getPrice() const
{
	return price;
}

int Book::getQtyInStock() const
{
	return qtyInStock;
}

string Book::getAuthorName() const
{
	return author.getName();
}


void Book::print() const
{
	printf("\n----------------------------------------------------------------------------\n");

	cout<<"|Name  :         "<< this->getName() << "                     | "<<endl;
	cout <<"|Price :         " << this->getPrice() <<"                                                        | "<< endl;
	cout <<"|Stock :         " << this->getQtyInStock() << " copies left " <<"                                           | "<< endl;
	printf("\n----------------------------------------------------------------------------\n");

/*
	printf("|%40c|",this->getName());
	printf("|%15lf|",this->getPrice());
	printf("|%15d|",this->getQtyInStock());
	printf("----------------------------------------------------------------------------\n");
*/
	author.print();
} 

