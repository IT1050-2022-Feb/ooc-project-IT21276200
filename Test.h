#include <string>
using namespace std;

class Test
{
private:
  int testID ;
  string testName ;
  string testType ;
  string testConBy ;
  string validStatus ;
  string description ;
	string observation ;
	string conclusion ;

public:
 Test();
 Test(int tID , string tName, string tType, string tConBy, string ValSt, string desc, 
 string obs, string concl );
 void displayDetails();
 
};