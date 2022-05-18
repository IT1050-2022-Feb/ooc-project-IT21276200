#include <iostream>

#include "user.h"
#include "administrator.h"
#include "labmanager.h"
#include "lab.h"
#include "LabAssistant.h"
#include "Equipment.h"
#include "Sample.h"
#include "Scientist.h"
#include "SScientist.h"
#include "Test.h"

using namespace std ;

int main(){
//creating objects
User *u1 = new User("Sandalu","Samarakoon","2001111111","0777777777","Cancer","User");
Administrator *a1=new Administrator("Sandalu","Samarakoon","200112343212","0777777777","","Administrator",1000);
Lab *lb1 = new Lab("Gavesh" , "cancer" , 03);
LabManager * m1 = new LabManager("Gavesh","Samarathunga","200112343212","0766666666","","Lab Manager",1004,lb1);

 Equipment *e1 = new Equipment("00001", "Intensity Modulated Radiation Therapy / IMRT", 3);
LabAssistant *l1 = new LabAssistant("Thiwanka","Kalpage","200112343212","0760909090","","Lab Assistant",1003, e1);

 Sample* s1 = new Sample("1", "Sample 1", "Type 1", "Storage wing B", "promising sample", "freezing", 3, "2020-02-22");
Scientist* sci1 = new Scientist("Manuja","Munasinghe","200112343212","0766281711","Cancer","Scientist","0001",s1);

 Test *t1 = new Test(60001, "name1", "type1", "Mr.ABC", "valid", "decription", "observation", "conclusion" );
SScientist *ss1 = new SScientist("Viduni","Herath","200112343212","0777777777","Cancer","Senior Scientist",1002, t1);


//calling methods //FROM
cout << " --> Displaying User Details <--" << endl << endl ;
u1->displayDeatails();// void User:: displayDeatails()
cout << endl ;
cout << " --> Administrator Details <--" << endl << endl;
a1->displayDeatails();//void Administrator:: displayDeatails()
cout << endl ;

 cout << "--> Scientist Details <--" << endl ;
sci1->displayScientistDetails();
cout << endl;

 cout << "--> Senior Scientist Details <--" << endl ;
ss1->displaySeniorScientistDetails();
cout << endl;

 cout << "--> Lab Assistant Details <--" << endl ;
l1->addEquipmentDetails();
cout << endl;

 cout << "--> Lab Manager Details <--" << endl ;
m1->diaplyLabManagerDetails();
cout << endl ;

cout << " --> Display Lab Details <--" << endl;
cout << endl ;
lb1 ->displaydetails();//void displaydetails()
cout << endl ;
cout << " --> Display Lab Details added by <--" << endl << endl;
m1 -> addlabDetails(); //void addlabDetails()
cout << endl ;
cout << " --> Displaying Equipment Details <--" << endl ;
e1->displayDetails();//void Equipment::displayDetails()
cout << " --> Displaying Equipment Details added by<--" << endl << endl;
l1->addEquipmentDetails(); //void LabAssistant::addEquipmentDetails()

cout << " --> Display Sample Details <--" << endl ;
s1->displaySampleDetails(); //void Sample::displaySampleDetails()
cout << endl ;
cout << " --> Display Sample Added by <--" << endl << endl;
sci1->displaySampleBy();//void Scientist::displaySampleBy()
cout << endl ;
cout << " --> Displaying Test Details <--" << endl ;
t1 -> displayDetails(); //void Test::displayDetails()
cout << endl ;
cout << " --> Display Test Conducted by <--" << endl << endl ;
ss1->displayConductedBy(); //void SScientist::displayConductedBy()
cout << endl ;


//deallocate memory
delete u1;
delete a1;
  cout << endl;
delete lb1;
delete m1;
  cout << endl;
delete e1;
delete l1;
  cout << endl;
delete s1;
delete sci1;
  cout << endl;
delete t1;
delete ss1;

}