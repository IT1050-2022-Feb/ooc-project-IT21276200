#pragma once
#include <string>

using namespace std;

class Lab
{
private:

string Incharge;
string Labname;
int LabID;

public:

Lab();

Lab(string incharge , string labname , int labid);
void displaydetails();
~Lab();

};