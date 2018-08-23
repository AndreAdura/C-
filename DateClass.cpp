// DateClass_Assignment1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
class AndreDate
{
private:
	//step 1 - create your data members
	int * Cday;
	int * Cmonth;
	int * Cyear;


	//step 2 initialize

public:
	AndreDate()// default contructor
	{
	}
	~AndreDate() // destructor
	{
	}

	//step 3 Access functions

	int * Getday()
	{
		return Cday;
	}

	int SetDay(int * Vday)
	{
		Cday = Vday;
	}

	int * GetMonth()
	{
		return Cmonth;
	}

	int SetMonth(int * Vmonth)
	{
		Cmonth = Vmonth;
	}

	int * GetYear()
	{
		return Cyear;
	}

	int setYear(int * Vyear)
	{
		Cyear = Vyear;
	}



};


int main()
{
	return 0;
}
