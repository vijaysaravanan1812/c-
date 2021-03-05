/*
Create a class Student which will have two private data fields: double gpa, and integer credits • It should have functions getGPA() and getGrades(), which will return the respective values • It should have a default constructor, which will set both values to zero, and a parameterized constructor, which will set them to the values of the constructor’s arguments In the main() function, create a dynamically allocated array of Student objects (i.e. the user should input how many students there will be and there should be no limit on the possible array size)

– Student *s = new Student[number_of_students]

• Equivalent to:

Student *s = new Student()[number_of_students];

• This is why it’s necessary to have a default constructor defined –

so that the adequate room in memory would be reserved

• It’s possible to allocate memory like this using any constructor; it only needs to be valid when invoking it to create the array

Modify so that messages would be displayed upon constructing elements with the default and the parameterized constructors • Add a destructor, which should also display a message that a Student object is destroyed • Also, messages should be displayed upon assigning values to the pointer to the new Student object, as well as to the element of the array of Student objects. Also, display a message upon the delete *sp; statement
*/


#include<iostream>
#include"Student.h"

using namespace std;

student::student()
{
    GPA = 0;credits = 0; 
}

student::student(double GPA,int Credits)
{
    this->GPA = GPA;
    this->credits = credits;
} 

double student::getGPA()
{
    return GPA;
}


void student::getGRADE(double GPA)
{
    printf("|%-10s||%10lf|\n","GPA",GPA);
    printf("|%-10s||%10d|\n","Credits",credits);
    printf("|%10s|\t","Grade");

    if(GPA == 10.0)
        printf("Your grade is O\n");
    else if(GPA >= 9.0 && GPA < 10.0)
        printf("Your grade is A+\n");
    else if(GPA >= 8.0 && GPA < 9.0)
        printf("Your grade is A\n");
    else if(GPA >= 7.0 && GPA < 8.0)
        printf("Your grade is B+\n");
    else if(GPA >= 6.0 && GPA < 7.0)
        printf("Your grade is B\n");
    else 
        printf("Your have to Reappear\n");

}


