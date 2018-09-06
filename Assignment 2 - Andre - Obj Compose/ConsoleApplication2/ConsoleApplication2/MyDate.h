#pragma once
#include <string.h>



class MyDate
{
private:
	int day;
	int month;
	int year;
	char * weekDays[];
	
	bool Checkyear(int);
	bool Checkmonth(int);
	bool Checkday(int);
	char * CheckWeekDay(int);
public:
	MyDate(); // default Constructor 
	MyDate(int, int, int); // Overloaded constructor 
	MyDate(MyDate *);
	~MyDate();
	// Access function 
	void Setyear(int);
	int Getyear();
	void Setmonth(int);
	int Getmonth();
	void Setday(int);
	int Getday();
	char * SetWeekDay(int);
	char * GetWeekDay();
	void PrintMyDate();


};
