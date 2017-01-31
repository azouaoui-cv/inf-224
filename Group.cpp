#include "Group.h"
#include <iostream>

using namespace std;

void Group::print(ostream & s) const {
  s << "The group " << getName() << " has the following medium: " << endl;
  for (auto it : *this){
    it->print(s);
  }

}
