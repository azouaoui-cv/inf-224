#include "Media.h"


//using namespace std;

//Media() {name="", fileName=""}
//Media(std::string name, std::string fileName) : name(name), fileName(fileName) {}

void Media::printMedia(std::ostream & s) const {
  s << "Name: " << getName() << ", PathName: " << getFileName() << std::endl;
}
