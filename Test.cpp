#include "Test.h"
#include <iostream>
#include <string>
using namespace std;

Test::Test(int tID , string tName, string tType, string tConBy, string ValSt, string desc, string obs, string concl )
{
      testID = tID ;
      testName = tName ;
      testType = tType ;
      testConBy = tConBy ;
      validStatus = ValSt ;
      description = desc ;
      observation = obs ;
      conclusion = concl ;
}

void Test::displayDetails()
{
  		cout << "-------------------------------------------" << endl;
			cout << "Test ID           : " << testID << endl;
      cout << "Test Name         : " << testName << endl;
      cout << "Test Type         : " << testType << endl;
      cout << "Test Conducted By : " << testConBy << endl;
      cout << "Validation Status : " << validStatus << endl;
      cout << "Discription       : " << description << endl;
      cout << "Observation       : " << observation << endl;
      cout << "Conclusion        : " << conclusion << endl;
      cout << "-------------------------------------------"<< endl;
}
