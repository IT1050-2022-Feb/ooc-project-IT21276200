#include "LabAssistant.h"

#include <iostream> 
#include <string>
using namespace std;

LabAssistant::LabAssistant() {
	labAssistantID = 0;
	eqmt = 0;
	}
LabAssistant::LabAssistant(int ilabAssistantID, Equipment*e)
{
	labAssistantID = ilabAssistantID;
	eqmt = e;
}

void LabAssistant::addEquipmentDetails()
{
	cout << "     Lab_Assistant's ID : " << labAssistantID << endl;
	eqmt->displayDetails();
}
LabAssistant::~LabAssistant() {
	cout << " --> Deleting Lab_Assistant " << endl;
}

void LabAssistant::addEquipment() {}
void LabAssistant::editEquipment() {}
void LabAssistant::deleteEquipment() {}