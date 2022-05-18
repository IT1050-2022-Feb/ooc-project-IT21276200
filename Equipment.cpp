#include "Equipment.h"

#include <iostream> 
#include <string>
using namespace std;


Equipment::Equipment() {
	equipmentID;
	equipmentName;
	quantity = 0;
	};
Equipment::Equipment(string iequipmentID, string iname, int iquantity)
	{
		equipmentID = iequipmentID;
		equipmentName = iname;
		quantity = iquantity;
	}
void Equipment::displayDetails()
	{
		cout << endl;
		cout << "        Equipment ID    : " << equipmentID << endl;
		cout << "        Equipment Name  : " << equipmentName << endl;
		cout << "        Quantity        : " << quantity << endl;
		cout << endl;
	}
Equipment::~Equipment() {
		cout << " --> Deleting Equipment " << endl;
	}