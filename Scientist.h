class Scientist : public User {
  private:
    Sample* sampNew; //association relationship
    Test* test1;
  
    string scientistID;
    Sample* samp;
  public:
    Scientist() {}//default constructor
    Scientist(string ufname,string ulname, string unic, string upno,string usf,string upos ,string sID,Sample *s) : User(ufname,ulname,unic,upno,usf,upos) 
  {
    scientistID = sID;
    samp = s;
  }//overloaded constructor
  void displaySampleBy() 
  {
    cout << "Sample added by :" << scientistID << endl;
    samp->displaySampleDetails();
  }
  
  void displayScientist()
  {
    cout << "Scientist : " << scientistID << endl << endl;
  }
  void displayScientistDetails()
  {
    cout << endl ;
    cout<<"First Name : "<<FirstName<<endl;
    cout<<"Last Name : "<<LastName<<endl;
    cout<<"Nic : "<<Nic<<endl;
    cout<<"PhoneNo : "<<PhoneNo<<endl;
    cout<<"Specializing Field : "<< SpecializingField<<endl;
    cout<<"Position : "<<Position<<endl;
    cout<<"Scientist Id : "<<scientistID<<endl;
    cout << endl ;
  }
  
  void addSample(Sample* sampNew) {} //one way association relation between scintist and sample
  void editSample(){}
  void addTest(Test* test1) {} //bi directional association between scientist and test
  void editTest() {}
  void deleteSample() {}
  void deleteTest() {}
  void viewEquipment() {}
  
   ~Scientist() {
  cout << "--> Delete Scientist" << endl ;
  }

};