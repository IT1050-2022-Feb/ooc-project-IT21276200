#pragma once
#include "Test.h"
#include "user.h"
#include <string>
using namespace std;

class SScientist : user
{
  private:
   	int ssID ;
    Test *test_1;
   	Test *conduct; //an object of Test as attribute
 // Sample *samp_New;  //an object for Sample class for Association relationship 
 // Sample *add ;  //an object of Sample class for Association relationship

  public:

   SScientist (); // default constructor
   SScientist (string ufname,string ulname, string unic, string upno,string usf,string upos,int pssID,  Test *c) ; //overloaded constructor

   void displayConductedBy();

   void displaySeniorScientistDetails();

  //  SScientist(int pssID, Sample *a)
  //  {
  //  ssID = pssID ;
  //  add = a ;
  //  }

  //  void displayAdd(){
  //  cout << "Added By : " << ssID << endl;
  //  add -> displayDetails(); } // tis method should be Sample class's method


  void addSample (/* Sample *samp_New */); // Sample - SScientist Association Relationship
  void editSample();
  void deleteSample();
  void conductTest(/* Test *test_1 */); // Test - SScientist Association relationship
  void EditTest();
  void deleteTest();
  void viewEquip();
  void validateTest();

 ~SScientist() ; //destructor

};
