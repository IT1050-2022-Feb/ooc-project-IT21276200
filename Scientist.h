#pragma once

#include "user.h" //including user header file
class Test;     //calling test before scientist class to point to the Test class
class Sample;   //calling Sample before scientist class to point to the sample class

//inheritance relationship - inherit from User class
class Scientist : public User {
  private:
    Sample* sampNew; //association relationship
    Test* test1;  //association relationship
  
    string scientistID;
    Sample* samp;
  public:
    Scientist();//default constructor declared
    Scientist(string ufname,string ulname, string unic, string upno,string usf,string upos ,string sID,Sample *s); //overloaded constructor declared  

  void displaySampleBy();
  
  void displayScientist();
  void displayScientistDetails();
  
  void addSample(Sample* sampNew); //one way association relation between scintist and sample
  void editSample();
  void addTest(Test* test1); //bi directional association between scientist and test
  void editTest();
  void deleteSample();
  void deleteTest();
  void viewEquipment();
  
   ~Scientist();

};