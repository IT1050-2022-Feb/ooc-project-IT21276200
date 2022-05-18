#include "labmanager.h"
#include <iostream>
#include <string>

using namespace std;

LabManager::LabManager(int lmid , Lab *l)
{
 labManagerID = lmid;
lab = l;
}
void LabManager::addlabDetails()
{
 cout << "Lab Manager ID :" << labManagerID << endl;
lab-> displaydetails();

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