#include "SScientist.h" // include header file
#include <iostream>
#include <cstring>
using namespace std;

SScientist::SScientist (string ufname,string ulname, string unic, string upno,string usf,string upos,int pssID,  Test *c):User(ufname,ulname,unic,upno,usf,upos)
{
  	ssID = pssID;
   	conduct = c ;
}

void SScientist::displayConductedBy()
{
  cout << "Conducted By :" << ssID << endl;
	conduct -> displayDetails();
}

void SScientist::displaySeniorScientistDetails(){
cout << endl ;
cout<<"First Name          : "<< FirstName <<endl;
cout<<"Last Name           : "<< LastName <<endl;
cout<<"Nic                 : "<< Nic <<endl;
cout<<"PhoneNo             : "<< PhoneNo <<endl;
cout<<"Specializing Field  : "<< SpecializingField <<endl ;
cout<<"Position            : "<< Position <<endl;
cout<<"Senior Scientist Id : "<< ssID <<endl;
cout << endl ;
}

 // SScientist(int pssID, Sample *a)
 // {
 // ssID = pssID ;
 // add = a ;
 // }

 // void displayAdd(){
 // cout << "Added By : " << ssID << endl;
 // add -> displayDetails(); } // this method should be Sample class's method

  void addSample(/* Sample *samp_New */){}
  void editSample(){}
  void deleteSample(){}
  void conductTest(/* Test *test_1 */){}
  void EditTest(){}
  void deleteTest(){}
  void viewEquip(){}
  void validateTest(){}

 SScientist::~SScientist() {
 cout << "--> Delete Scientist" << endl ;
   
}