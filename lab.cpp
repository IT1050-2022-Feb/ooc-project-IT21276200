#include "lab.h"
#include <iostream>
#include <string>

using namespace std;

Lab::Lab(string incharge , string labname , int labid)
{
Incharge = incharge;
Labname = labname ;
LabID = labid ;

}
void Lab::displaydetails()
{
cout << "Incharge :" << Incharge << endl ;
cout << "Labname :" << Labname << endl ;
cout << "Lab ID: " << LabID << endl ;

}
