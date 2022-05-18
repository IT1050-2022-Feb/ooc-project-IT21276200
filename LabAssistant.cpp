#include "LabAssistant.h" //including LabAssistant header file


#include <iostream>  // including iostream library
#include <string>  // including string library
using namespace std;

//default constructor
LabAssistant::LabAssistant() {
	labAssistantID = 0;
	eqmt = 0;
	}
//overloaded constructors
LabAssistant::LabAssistant(string ufname,string ulname, string unic, string upno,string usf,string upos,int ilabAssistantID, Equipment*e):User(ufname,ulname,unic,upno,usf,upos) //Inheritance relationship
{
	labAssistantID = ilabAssistantID;
	eqmt = e;
}

void LabAssistant::addEquipmentDetails() //association relation between Equipment and Lab Assistamt
{
	cout << "     Lab_Assistant's ID : " << labAssistantID << endl;
	eqmt->displayDetails();  //Calling for the displayDetails method in Equipment class
}
void LabAssistant::addEquipment() {  //addEquipment method
  
}
void LabAssistant::editEquipment() {  //editEquipment method
  
}
void LabAssistant::deleteEquipment() {  //deleteEquipment method
  
}
LabAssistant::~LabAssistant() { // destructor
	cout << " --> Deleting Lab_Assistant " << endl;
}