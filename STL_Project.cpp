// STL_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include<string>

using namespace std;



int main()
{
	//CREATING THE VECTOR
	static vector<int> myVector;
	
	//CREATING SOME ITERATORS TO PRINT THE VECTOR
	auto itBegin = myVector.begin(); 
	auto itEnd = myVector.end();
	


	// CREATING THE START SCREEN WITH THE MENU
	int option;
	cout << "Please enter your Option" << endl;
	
	cout << "***VECTORS***" << endl;
	cout << "1	Add an Element to the front of vector\n2	Add an element to the end of the vector\n3	Add an element to a specific location in the vector\n4	Print the vector\n5	Show Vector’s size\n6	Access a particular Element in the vector by using Iterator\n7	Access a Particular Element in the vector by using[] operator" << endl;

	// GETTING THE INPUT IN THE MENU 
	cin >> option;

	//HANDLING THE INPUT
	switch (option)
	{
	case 1:
		int vectorElement;
		cout << "Please insert a number to be included at the front of the Vector" << endl;
		cin >> vectorElement;

		myVector.insert(myVector.begin(), vectorElement);

		cout << "The Vector Elements are:" << endl;

		//PRINTING THE VECTOR
		for (int & i: myVector)
		{
			cout << i << ' ' << endl;
		}

		main();
		break;

	case 2:
		cout << "Please insert a number to be included at the end of the Vector" << endl;
		cin >> vectorElement;

		myVector.insert(myVector.end(), vectorElement);

		cout << "The Vector Elements are:" << endl;

		//PRINTING THE VECTOR
		for (int & i : myVector)
		{
			
			cout << i << ' ' << endl;
		}

		main();
		break;

	case 3:
		int vectorPosition;
		cout << "Please insert a number to be included in the Vector" << endl;
		cin >> vectorElement;

		cout << "Please inser the position that you want to include this number" << endl;
		cin >> vectorPosition;

		if (vectorPosition > myVector.size())
		{
			cout << "This function is to add numbers in between, to add at the end please use the option 2" << endl;
				main();
		}
		else
		{
			myVector.at(vectorPosition) = vectorElement;
		}
		

		cout << "The Vector Elements are:" << endl;

		//PRINTING THE VECTOR
		for (int & i : myVector)
		{

			cout << i << ' ' << endl;
		}

		main();
		break;


	case 4:

		cout << "Print the Vector" << endl;

		for (int & i : myVector)
		{
			cout << i << endl;
		}

		break;

	case 5:

		cout << myVector.size() << endl;

		break;

	case 6:
		int index;
		cout << "Choose the element index do you want to display" << endl;
		cin >> index;



		

		cout << myVector[index] << endl; 

		break;

	default:

	case 7:

		int index2;
		cout << "Choose the element index do you want to display" << endl;
		cin >> index2;





		cout << myVector[index2] << endl;

		break;

		// *********************** END OF VECTORS PARTS ******************************



		return 0;
		break;
	}
	
    return 0;
}

