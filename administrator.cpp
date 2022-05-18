#include "administrator.h"
#include <iostream>
#include <string>

Administrator::Administrator(string ufname,string ulname, string unic, string upno,string usf,string upos,int aid):User(ufname,ulname,unic,upno,usf,upos)
{
   adminid=aid;
}

void addUser(){};
void editUser(){};
void deleteUser(){};

void Administrator::displayDeatails()

{
cout<<"First Name : "<<FirstName<<endl;
cout<<"Last Name : "<<LastName<<endl;
cout<<"Nic : "<<Nic<<endl;
cout<<"PhoneNo : "<<PhoneNo<<endl;
cout<<"Position : "<<Position<<endl;
cout<<"Admini Id : "<<adminid<<endl;
}