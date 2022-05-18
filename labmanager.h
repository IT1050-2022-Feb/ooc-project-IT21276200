#include "lab.h"
#include <string>

using namespace std;

class LabManager
{
private:
int labManagerID;
Lab *lab ;

public:
LabManager(int lmid , Lab *l);
void addlabDetails();

void addlab();
void editlab();
void deletelab();
};