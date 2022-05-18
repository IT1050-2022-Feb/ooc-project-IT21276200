#include "User.h"
#include <iostream>
#include <cstring>
using namespace std;

User::User()
{
  FirstName="Viduni";
  LastName="Hereth";
  Nic="2000123456";
  PhoneNo=701855399;
  SpecializingField="Cancer";
  Position="Senior Scientist";
}

void User:: displayDeatails()
{
  cout<<"First Name:"<<FirstName<<endl;
  cout<<"Last Name:"<<LastName<<endl;
  cout<<"Nic:"<<Nic<<endl;
  cout<<"PhoneNo:"<<PhoneNo<<endl;
  cout<<"Specializing Field:"<<SpecializingField<<endl;
  cout<<"Position:"<<Position<<endl;
}

User::~User()
{
  
}


