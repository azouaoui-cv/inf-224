#include "Media.h"
#include <iostream>

using namespace std;

void Media::print(ostream & s) const {
  //prints the media name and pathname.
  s << "Name: " << getName() << ", PathName: " << getFileName() << endl;
}
