#ifndef BOOKREF_H
#define BOOKREF_H
#include <string>
#include "AuthorPassRefDefinitions.cpp" 
using namespace std;
 

class Book {
private:
   string name;
   Author author;
   double price;
   int qtyInStock;// quantity in stack
 
public:

   //functions to assign value
   Book(const string & name, const Author & author, double price, int qtyInStock = 0);
   void setPrice(double price);
   void setQtyInStock(int qtyInStock);


   //function to get class member
   string getName() const;
   Author getAuthor() const;
   string getAuthorName() const;
   double getPrice() const;
   int getQtyInStock() const;
 
   void print() const;
   
};
#endif
 
