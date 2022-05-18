#include "Test.h"
#include <string>
using namespace std;

class SScientist
{
    private:
   	int ssID ;
    Test *tcond;
   	Test *conduct; //an object of Test as attribute
 // Sample *sadd;  //an object for Sample class for Association relationship 
 // Sample *add ;//an object of Sample class for Association relationship

   public:
   SScientist (int pssID,  Test *c) ;
   void displayConductedBy();
  //  SScientist(int pssID, Sample *a)
  // {
  //  ssID = pssID ;
   // add = a ;
  //  }

  //  void displayAdd(){
  //  cout << "Added By : " << ssID << endl;
  //  add -> displayDetails(); } // tis method should be Sample class's method


  void addSample (/* Sample *sadd*/ ); // Sample - SScientist Association Relationship
  void editSample();
  void deleteSample();
  void conductTest(/*Test *tcond */); // Test - SScientist Association relationship
  void EditTest();
  void deleteTest();
  void viewEquip();
  void validateTest();

};
