#pragma once
#include "user.h"
#include <string>
using namespace  std;

class Administrator:public User
{
 private:
  int adminid;

 public:
   Administrator();
   Administrator(string ufname,string ulname, string unic, string upno,string usf,string upos,int aid);
   void addUser();
   void editUser();
   void deleteUser();
   void displayDeatails();
};