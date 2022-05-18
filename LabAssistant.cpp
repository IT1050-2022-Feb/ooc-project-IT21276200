#include "LabAssistant.h"


#include <iostream> 
#include <string>
using namespace std;

//default constructor
LabAssistant::LabAssistant() {
	labAssistantID = 0;
	eqmt = 0;
	}
//overloaded constructors
LabAssistant::LabAssistant(string ufname,string ulname, string unic, string upno,string usf,string upos,int ilabAssistantID, Equipment*e):User(ufname,ulname,unic,upno,usf,upos)
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

void LabAssistant::addEquipment() {
  
}
void LabAssistant::editEquipment() {
  
}
void LabAssistant::deleteEquipment() {
  
}