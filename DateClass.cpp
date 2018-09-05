#include "stdafx.h"
#include <iostream>
using namespace std;


class AndreDate
{
private:
	//step 1 - create your data members
	int  Cday;
	int  Cmonth;
	int  Cyear;


	//step 2 initialize

public:
	AndreDate()// default contructor
	{
	}
	~AndreDate() // destructor
	{
	}

	//step 3 Access functions

	int  Getday()
	{
		return Cday;
	}

	int SetDay(int  Vday)
	{
		Cday = Vday;

		return Cday;
	}

	int  GetMonth()
	{
		return Cmonth;
	}

	int SetMonth(int  Vmonth)
	{
		Cmonth = Vmonth;
		return Cmonth;
	}

	int  GetYear()
	{
		return Cyear;
	}

	int SetYear(int  Vyear)
	{
		Cyear = Vyear;
		return Cyear;
	}



};


int main()
{
	//static object
	AndreDate MyDate;

	//setup MyDate;
	MyDate.SetDay(28);
	MyDate.SetMonth(6);
	MyDate.SetYear(1990);

	if (MyDate.Getday() <= 0 || MyDate.Getday() > 32) {
		cout << "Invalid Day - The range is from 1 to 31" << endl;
	}
	else {
		cout << "Day   :" << MyDate.Getday() << endl;
	}



	if (MyDate.GetMonth() <= 0 || MyDate.GetMonth() > 12) {
		cout << "Invalid Month - The range is from 1 to 12" << endl;
	}
	else {
		cout << "Month :" << MyDate.GetMonth() << endl;
	}



	if (MyDate.GetYear() <= 0 || MyDate.GetYear() > 2050) {
		cout << "Invalid Year - The range is from 1 to 2050" << endl;
	}
	else {
		cout << "Year  :" << MyDate.GetYear() << endl;
	}

	


	return 0;
}
