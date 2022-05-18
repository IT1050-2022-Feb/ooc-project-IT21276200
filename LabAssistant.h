#pragma once
#include "Equipment.h"
#include <iostream> 
#include <string>
using namespace std;

class LabAssistant
{
private:
	int labAssistantID;
	Equipment* eqmt; //an object of Equipment as attribute

public:
	LabAssistant();
	LabAssistant(int ilabAssistantID, Equipment* e);
	void addEquipmentDetails();
	~LabAssistant();
	void addEquipment();
	void editEquipment();
	void deleteEquipment();
};
