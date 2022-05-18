#include "user.h"
#include <iostream>
#include <string>

User::User (string ufname,string ulname, string unic, string upno,string usf,string upos)
{
 FirstName = ufname ;
 LastName = ulname ;
 Nic = unic ;
 PhoneNo = upno;
 SpecializingField = usf ;
 Position = upos ;
}

void User::displayDeatails()
{
cout<<"First Name : "<<FirstName<<endl;
cout<<"Last Name : "<<LastName<<endl;
cout<<"Nic : "<<Nic<<endl;
cout<<"PhoneNo : "<<PhoneNo<<endl;
cout<<"Specializing Field : "<<SpecializingField<<endl;
cout<<"Position : "<<Position<<endl;
}