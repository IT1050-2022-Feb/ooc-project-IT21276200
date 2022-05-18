#include "Administrator.h"
#include <iostream>
#include <cstring>

using namespace std;

Administrator::Administrator()
{
  FirstName="Sandalu";
  LastName="Samarakoon";
  Nic="2000325010169";
  PhoneNo=768916609;
  Position="Administrator";
  adminid=1000;
}

void Administrator:: addUser(){}
void Administrator:: editUser(){}
void Administrator:: deleteUser(){}

void Administrator:: displayDeatails()
{
  cout<<"First Name:"<<FirstName<<endl;
  cout<<"Last Name:"<<LastName<<endl;
  cout<<"Nic:"<<Nic<<endl;
  cout<<"PhoneNo:"<<PhoneNo<<endl;
  cout<<"Position:"<<Position<<endl;
  cout<<"Admini Id:"<<adminid<<endl;
}