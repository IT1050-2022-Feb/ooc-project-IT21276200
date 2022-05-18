#pragma once
#include <iostream>  // including iostream library
#include <string>   // including string library
using namespace std; 

  // Equipment Class
class Equipment
{
private:
	string equipmentID;
	string equipmentName;
	int quantity;
public:
	Equipment();  // default constructor
	Equipment(string iequipmentID, string iname, int iquantity); // overloaded constructors
	void displayDetails(); // association relation between Equipment and Lab Assistamt
	~Equipment(); // destructor
};