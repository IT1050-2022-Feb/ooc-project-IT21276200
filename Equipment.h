#pragma once
#include <iostream> 
#include <string>
using namespace std;

class Equipment
{
private:
	string equipmentID;
	string equipmentName;
	int quantity;
public:
	Equipment();
	Equipment(string iequipmentID, string iname, int iquantity);
	void displayDetails();
	~Equipment();
};