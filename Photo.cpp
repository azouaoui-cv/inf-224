#include "Photo.h"

using namespace std;

void Photo::print(ostream & s) const {
  s << "Name: " << getName() << ", PathName: " << getFileName() << ", Latitude: " << getLatitude()
  <<", Longitude: " << getLongitude() << endl;
}
