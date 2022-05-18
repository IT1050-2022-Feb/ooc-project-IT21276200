#pragma once
#include <string>
using namespace std;

class User
{
protected:
   string FirstName;
   string LastName;
   string Nic;
   string PhoneNo;
   string SpecializingField;
   string Position;

public:
   User();
   User(string ufname,string ulname, string unic, string upno,string usf,string upos);
   void displayDeatails();
};