#pragma once
#include "lab.h"
#include "user.h"

#include <string>


using namespace std;

class LabManager:public User
{
private:
int labManagerID;
Lab *lab ;

public:
LabManager(string ufname,string ulname, string unic, string upno,string usf,string upos,int lmid , Lab *l);
void addlabDetails();
void diaplyLabManagerDetails();

void addlab();
void editlab();
void deletelab();
};