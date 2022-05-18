#include <iostream> // including iostream library

//including all header files

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
//creating objects dynamically and passing data to overloaded constructor
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
u1->displayDeatails();// void displayDeatails()
cout << endl ;
cout << " --> Administrator Details <--" << endl << endl;
a1->displayDeatails();//void displayDeatails()
cout << endl ;

  
cout << "--> Scientist Details <--" << endl ;
sci1->displayScientistDetails(); //displayScientistDetails method is called
cout << endl;

 cout << "--> Senior Scientist Details <--" << endl ;
ss1->displaySeniorScientistDetails();
cout << endl; // call displaySeniorScientistDetails()

 cout << "--> Lab Assistant Details <--" << endl ;
l1->addEquipmentDetails(); // addEquipmentDetails() method is called
cout << endl;

 cout << "--> Lab Manager Details <--" << endl ;
m1->diaplyLabManagerDetails();//displaylabmanagerdetails
cout << endl ;

cout << " --> Display Lab Details <--" << endl;
cout << endl ;
lb1 ->displaydetails();//void displaydetails()
cout << endl ;
cout << " --> Display Lab Details added by <--" << endl << endl;
m1 -> addlabDetails(); //void addlabDetails()
cout << endl ;
cout << " --> Displaying Equipment Details <--" << endl ;
e1->displayDetails(); // displayDetails() is called
cout << " --> Displaying Equipment Details added by<--" << endl << endl;
l1->addEquipmentDetails(); // addEquipmentDetails() method is called

cout << " --> Display Sample Details <--" << endl ;
s1->displaySampleDetails(); //displaySampleDetails() method is called
cout << endl ;
cout << " --> Display Sample Added by <--" << endl << endl;
sci1->displaySampleBy();//displaySampleBy() is called
cout << endl ;
cout << " --> Displaying Test Details <--" << endl ;
t1 -> displayDetails(); // call displayDetails()
cout << endl ;
cout << " --> Display Test Conducted by <--" << endl << endl ;
ss1->displayConductedBy(); // call displayConductedBy()
cout << endl ;


//deallocate memory
  
delete u1; //delete object created in user class
delete a1;//delete object created in administrator.cpp
  cout << endl;
delete lb1;//delete lab object
delete m1;//delete lab manager object
  cout << endl;
delete e1; //deleting Equipment object
delete l1; //deleting LabAssistant object
  cout << endl;
delete s1; //deleting sample object
delete sci1; //deleting scientist object
  cout << endl;
delete t1;  // delete object created in Test class
delete ss1; // delete object creted in SScientist class

}