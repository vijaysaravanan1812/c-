#include <iostream>
#include "TimeDefinitions.cpp"
using namespace std;

int main()
{
	int h,m,s;
	char ch;
	cout << "Enter the hour part (hh) : ";
	cin >> h;
	cout << "Enter the minute part (mm) : ";
	cin >> m;
	cout << "Enter the second part (ss) : ";
	cin >> s;
	
	Time t1(h,m,s);
	t1.setTime(h,m,s);
	
	t1.print();
	
	cout << "The program will now add one second to the time ..... Continue? (y/n) ";
	cin >> ch;
	while( ch =='Y' || ch == 'y')
	{
		t1.nextSecond();
		t1.print();
		cout << "Continue ? (y/n) ";
		cin >> ch;
		
	}
	
}
