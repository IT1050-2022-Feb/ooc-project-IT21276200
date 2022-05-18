#include "Equipment.h"  //including Equipment header file

#include <iostream>   // including iostream library
#include <string>   // including string library
using namespace std;


Equipment::Equipment()  {  // default constructor
	equipmentID ;
	equipmentName ;
	quantity = 0;
	};
Equipment::Equipment(string iequipmentID, string iname, int iquantity) // overloaded constructors
	{
		equipmentID = iequipmentID;
		equipmentName = iname;
		quantity = iquantity;
	}
void Equipment::displayDetails() // association relation between Equipment and Lab Assistamt
	{
		cout << endl;
		cout << "        Equipment ID    : " << equipmentID << endl;
		cout << "        Equipment Name  : " << equipmentName << endl;
		cout << "        Quantity        : " << quantity << endl;
		cout << endl;
	}
Equipment::~Equipment() { // destructor
		cout << " --> Deleting Equipment " << endl;
	}