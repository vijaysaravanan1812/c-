#ifndef AUTHORREF_H
#define AUTHORREF_H
#include <string>

using namespace std;
 
class Author {
private:
   string name;
   string email;
   char gender;   // 'm', 'f', or 'u' for unknown
 
public:

   //constructor to assign value to object
   Author(const string & name, const string & email, char gender);
   void setEmail(const string &email);
  
   //function to get class members
   string getName() const;
   string getEmail() const;
   char getGender() const;
   
   void print() const;
};
#endif
 

