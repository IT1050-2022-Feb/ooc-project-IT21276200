#include <iostream>

#include "Scientist.h"
#include "Sample.h"

using namespace std; 

//default constructor
Scientist::Scientist(){
  
}

//overloaded constructors  - with the inherited attributes from user class
Scientist::Scientist(string ufname,string ulname, string unic, string upno,string usf,string upos ,string sID,Sample *s):User(ufname,ulname,unic,upno,usf,upos){
    scientistID = sID;
    samp = s;
}


//displaySampleBy method is implemented
void Scientist::displaySampleBy() {
    cout << "Sample added by :" << scientistID << endl;
    samp->displaySampleDetails();
  }

void Scientist::displayScientist(){
    cout << "Scientist : " << scientistID << endl << endl;
  }


//displayScientistDetails is implemented
void Scientist::displayScientistDetails(){
    cout << endl;
    cout<<"First Name : "<<FirstName<<endl;
    cout<<"Last Name : "<<LastName<<endl;
    cout<<"Nic : "<<Nic<<endl;
    cout<<"PhoneNo : "<<PhoneNo<<endl;
    cout<<"Specializing Field : "<< SpecializingField<<endl;
    cout<<"Position : "<<Position<<endl;
    cout<<"Scientist Id : "<<scientistID<<endl;
    cout << endl ;
  }


 //one way association relation between scintist and sample classes 
  void Scientist::addSample(Sample* sampNew) {
    
  }


  void Scientist::editSample(){
    
  }


//bi directional association between scientist and test classes 

  void Scientist::addTest(Test* test1) {
    
  } 
  void Scientist::editTest() {
    
  }
  void Scientist::deleteSample() {
    
  }
  void Scientist::deleteTest() {
    
  }
  void Scientist::viewEquipment() {
    
  }
  
   Scientist::~Scientist() {
  cout << "--> Delete Scientist" << endl ;
  }