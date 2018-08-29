#include <iostream>


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
    //static object
    AndreDate MyDate;

    //setup MyDate;
    MyDate.SetDay(28);
    MyDate.SetMonth(6);
    MyDate.setYear(1990);

    cout << "Day   :" << MyDate.Getday()<<endl;
    cout << "Month :" << MyDate.GetMonth()<< endl;
    cout << "Year  :" << MyDate.GetYear() << endl;


	return 0;
}
