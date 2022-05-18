#include <string>
usring namespace std;
class User
{
  protected:
    string FirstName;
    string LastName;
    string Nic;
    int PhoneNo;
    string SpecializingField;
    string Position;

   public:
    User();
    void displayDeatails();
    ~User();
};