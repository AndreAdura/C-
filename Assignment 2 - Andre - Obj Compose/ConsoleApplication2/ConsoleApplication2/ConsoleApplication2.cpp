// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyDate.h"
#include<iostream>

using namespace std;



int main()
{
 //Testing Date
	MyDate* StartDate = new MyDate();
	MyDate* EndDate = new MyDate(2018, 9, 23);
	MyDate* FinishDate = new MyDate(EndDate);
	StartDate->Setyear(2018);
	StartDate->Setmonth(7);
	StartDate->Setday(2);
	StartDate->SetWeekDay(1);
	cout << "Start Date" << endl;
	StartDate->PrintMyDate();
	cout << "End Date" << endl;
	EndDate->PrintMyDate();
	cout << "Finishing Date:" << endl;
	FinishDate->PrintMyDate();



    return 0;
}

