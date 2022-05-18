#include "user.h"
#include <string>
using namespace std;

class Administrator:public User
{
 private:
  int adminid;

 public:
  Administrator();
  void addUser();
  void editUser();
  void deleteUser();
  void displayDeatails();
};