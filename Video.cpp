#include "Video.h"

using namespace std;

void Video::print(ostream & s) const {
  s << "Name: " << getName() << ", PathName: " << getFileName() << ", duration: " << getDuration() << endl;
}
