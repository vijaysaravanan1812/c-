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


class student
{
private:
    double GPA;int credits;
public:
    student();
    student(double GPA,int Credits);
    double getGPA();
    void getGRADE(double GPA);

};
 


