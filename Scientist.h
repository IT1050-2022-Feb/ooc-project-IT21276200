class Test;
class Sample;

class Scientist : public User {
  private:
    Sample* sampNew; //association relationship
    Test* test1;  //association relationship
  
    string scientistID;
    Sample* samp;
  public:
    Scientist();//default constructor
    Scientist(string ufname,string ulname, string unic, string upno,string usf,string upos ,string sID,Sample *s);

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