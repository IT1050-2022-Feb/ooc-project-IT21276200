#include "SScientist.h"
#include <iostream>
#include <cstring>
using namespace std;

SScientist::SScientist (int pssID,  Test *c)
{
  	ssID = pssID;
   	conduct = c ;
}

void SScientist::displayConductedBy()
{
  cout << "Conducted By :" << ssID << endl;
	conduct -> displayDetails();
}

 //  SScientist(int pssID, Sample *a)
   // {
  //  ssID = pssID ;
   // add = a ;
  //  }

  //  void displayAdd(){
  //  cout << "Added By : " << ssID << endl;
  //  add -> displayDetails(); } // tis method should be Sample class's method

  void addSample(){}
  void editSample(){}
  void deleteSample(){}
  void conductTest(){}
  void EditTest(){}
  void deleteTest(){}
  void viewEquip(){}
  void validateTest(){}