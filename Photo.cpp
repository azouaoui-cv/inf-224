#include "Photo.h"

using namespace std;

void Photo::print(ostream & s) const {
  s << "Name: " << getName() << ", PathName: " << getFileName() << ", Latitude: " << getLatitude()
  <<", Longitude: " << getLongitude() << endl;
}

void Photo::play() const {
  string systemString = "imagej " + getFileName() + " &";
  cout << systemString << endl;
}
