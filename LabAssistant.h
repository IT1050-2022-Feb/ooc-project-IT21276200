#pragma once

#include "Equipment.h"
#include "user.h"
#include <iostream> 
#include <string>
using namespace std;

class LabAssistant:public User
{
private:
	int labAssistantID;
	Equipment* eqmt; //an object of Equipment as attribute

public:
	LabAssistant();
	LabAssistant(string ufname,string ulname, string unic, string upno,string usf,string upos,int ilabAssistantID, Equipment* e);
	void addEquipmentDetails(); //association relation between Equipment and Lab Assistamt
	~LabAssistant();
	void addEquipment();
	void editEquipment();
	void deleteEquipment();
};
