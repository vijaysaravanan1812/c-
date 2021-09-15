#include <iostream>
#include "Time.h"
#include <sstream> 
#include <string>
using namespace std;

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}
Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

int Time::getHour() const
{
	return hour;
}

void Time::setHour(int h)
{
	if(h >= 24)
	{
		hour = h%24;
	}
	else if(h < 0)
		hour = 0;
	else
		hour = h;
}

int Time::getMinute() const
{
	return minute;
}

void Time::setMinute(int m)
{
	if(m >= 60)
	{
		minute = m%60;
		setHour(hour+(m/60));
	}
	else if(m < 0)
		minute = 0;
	else
		minute = m;
}

int Time::getSecond() const
{
	return second;
}

void Time::setSecond(int s)
{
	if(s>=60)
	{
		second = s%60;
		setMinute(minute+(s/60));
	}
	else if(s < 0)
		second = 0;
	else
		second = s;
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::print() const
{
	ostringstream h1,m1,s1; 
	h1 << hour;
	m1 << minute;
	s1 << second;
	string h = h1.str();
	if(hour < 10)
		h = '0' + h;
		
	string m = m1.str();
	if(minute < 10)
		m = '0' + m;
		
	string s = s1.str();
	if(second < 10)
		s = '0' + s;
	
	cout << "Time : " << h << ":" << m << ":" << s <<"\n";
}

void Time::nextSecond()
{
	setSecond(second+1);
}
