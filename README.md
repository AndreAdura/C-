 Casting / conversion of type : static_cast<NEW_TYPE>(ELEMENT)  Ex: static_cast<double>(MyVariable);
  ----------------------------------------------------------------------------------------------------------
  
 Tubular mode / Alignment: setw(NUMBER OF SPACES)  OBS: Must include the header: #include <iomanip>
 ex: 
 
     cout << "Column 1" << setw(10) << "Column 2"<<endl;
     cout << setw(8) << "1" << setw(10) << "2";
     
 -----------------------------------------------------------------------------------------------------------------
 
 ARRAY OF STRINGS USING POINTERS:
 
 #include <iostream>
#include <iomanip>
using namespace std;

int main()
{

const char *MyString [3] = {"element1", "element2","element3"};

cout << MyString[0] << "\n" << MyString[1]<< "\n"  << MyString[2]<< endl;

    return 0;
}
-------------------------------------------------------------------------------------------------
