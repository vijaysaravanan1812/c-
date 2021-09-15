
#include <iostream>
#include "AuthorPassRef.h"
#include <string>
using namespace std;

//function to assign values to class member
Author::Author(const string & name, const string & email, char gender)
{
	setEmail(email);
	this->name = name;	
	if(gender == 'm' || gender == 'f')
		this->gender = gender;
	else
	{
		cout << "Invalid character for gender....Setting gender to unknown(u)\n";
		this->gender = 'u';
	}
}

void Author::setEmail(const string &email)
{
	this->email = email;
}

//function to get class member 
string Author::getName() const
{
	return name;
}
string Author::getEmail() const
{
	return email;
}
char Author::getGender() const
{
	return gender;
}

void Author::print() const
{	
	printf("|%-74s|\n","Author");
	printf("----------------------------------------------------------------------------\n");
	printf("|%-15s||%-15s||%-40s|","Name","Gender","Email");
	printf("\n----------------------------------------------------------------------------\n");
	cout<<"| "<< name << "  || " << gender <<"             || " << email <<"  |";
	printf("\n----------------------------------------------------------------------------\n");
}



