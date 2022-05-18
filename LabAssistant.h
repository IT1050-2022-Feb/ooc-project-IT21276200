#pragma once

#include "Equipment.h"  //including Equipment header file
#include "user.h"  //including User header file
#include <iostream>  // including iostream library
#include <string>  // including string library
using namespace std;

class LabAssistant:public User //Inheritance relationship detween User and LabAssistant
{
private:
	int labAssistantID;
	Equipment* eqmt; //an object of Equipment as attribute

public:
	LabAssistant(); // default constructor
	LabAssistant(string ufname,string ulname, string unic, string upno,string usf,string upos,int ilabAssistantID, Equipment* e);  // overloaded constructors
	void addEquipmentDetails(); //association relation between Equipment and Lab Assistamt
	void addEquipment(); //addEquipment method
	void editEquipment(); //editEquipment method
	void deleteEquipment(); //deleteEquipment method
  ~LabAssistant();  // destructor
};
