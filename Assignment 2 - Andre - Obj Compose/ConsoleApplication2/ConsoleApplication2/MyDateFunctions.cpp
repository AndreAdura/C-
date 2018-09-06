#include "stdafx.h"
#include "MyDate.h"
#include <iostream>
using namespace std;

MyDate::MyDate()
{
	day = 0;
	month = 0;
	year = 0;
	weekDays[7] = { "Sunday" };
}
MyDate::MyDate(int Vyear, int Vmonth, int Vday)
{
	if (Checkyear(Vyear))
	{
		year = Vyear;
	}
	else
	{
		year = 0;
	}
	if (Checkmonth(Vmonth))
	{
		month = Vmonth;
	}
	else
	{
		month = 0;
	}
	if (Checkday(Vday))
	{
		day = Vday;
	}
	else
	{
		day = 0;
	}
}
MyDate::MyDate(MyDate * Right)
{
	year = Right->Getyear();
	month = Right->Getmonth();
	day = Right->Getday();
}
MyDate::~MyDate()
{
}
int MyDate::Getday()
{
	return day;
}
int MyDate::Getmonth()
{
	return month;
}
int MyDate::Getyear()
{
	return year;
}

char* MyDate::GetWeekDay()
{
	return weekDays[0];
}

void MyDate::Setday(int Vday)
{
	if (Checkday(Vday))
	{
		day = Vday;
	}
	else
	{
		day = 0;
	}
}
void MyDate::Setmonth(int Vmonth)
{
	if (Checkmonth(Vmonth))
	{
		month = Vmonth;
	}
	else
	{
		month = 0;
	}
}
void MyDate::Setyear(int Vyear)
{
	if (Checkyear(Vyear))
	{
		year = Vyear;
	}
	else
	{
		year = 0;
	}
}

char* MyDate::SetWeekDay(int dayOfWeek)
{
	char* Vweekdays[1] = { "Monday" };

		weekDays[7] = Vweekdays[7];
		
		if (dayOfWeek == 1)
		{
			return Vweekdays[1];
		}
		else
			return weekDays[7];

}


bool MyDate::Checkyear(int Vyear)
{
	if (Vyear < 1900 || Vyear > 2100)
	{
		return false;
	}
	return true;
}
bool MyDate::Checkmonth(int Vmonth)
{
	if (Vmonth < 1 || Vmonth > 12)
	{
		return false;
	}
	return true;
}
bool MyDate::Checkday(int Vday)
{
	if (month == 2)
	{
		if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
		{
			if (Vday < 1 || Vday >29)
			{
				return false;
			}
		}
		else
		{
			if (Vday < 1 || Vday >28)
			{
				return false;
			}
		}
	}
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		&& (Vday < 1 || Vday >31))
	{
		return false;
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11)
		&& (Vday < 1 || Vday >30))
	{
		return false;
	}

	return true;
}




void MyDate::PrintMyDate()
{
	cout << "The content of this object is" << endl;
	cout << "Year:" << year << endl;
	cout << "Month:" << month << endl;
	cout << "Day:" << day << endl;
	cout << "Week Day: " << weekDays[7] << endl;
}