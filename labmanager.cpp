#include "labmanager.h"
#include <iostream>
#include <string>


using namespace std;

LabManager::LabManager(string ufname,string ulname, string unic, string upno,string usf,string upos,int lmid , Lab *l):User(ufname,ulname,unic,upno,usf,upos)
{
  labManagerID = lmid;
  lab = l;
}
void LabManager::addlabDetails()
{
 cout << "Lab Manager ID :" << labManagerID << endl;
lab-> displaydetails();

}
void LabManager::diaplyLabManagerDetails(){
cout << endl ;
cout<<"First Name     : "<<FirstName<<endl;
cout<<"Last Name      : "<<LastName<<endl;
cout<<"Nic            : "<<Nic<<endl;
cout<<"PhoneNo        : "<<PhoneNo<<endl;
cout<<"Position       : "<<Position<<endl;
cout<<"Lab Manager Id : "<<labManagerID<<endl;
cout << endl ;
}
void addlab()
{

}
void editlab()
{

}
void deletelab()
{

}