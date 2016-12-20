#include "Video.h"

using namespace std;

void Video::print(ostream & s) const {
  s << "Name: " << getName() << ", PathName: " << getFileName() << ", duration: " << getDuration() << endl;
}

void Video::play() const {
  //Temporary method definition
  string systemString = "mpv " + getFileName() + " &";
  cout << systemString << endl;
  //system(systemString.c_str());
}
