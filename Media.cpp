#include "Media.h"


//using namespace std;

Media() {name="", fileName=""}
Media(std::string name, std::string fileName) : name(name), fileName(fileName) {}

void printMedia(ostream & s){
  s << 'Name: ' << getName() << ', PathName: ' << getFileName() << endl;
}


int main() {
  Media * m1 = new Media();
  Media * m2 = new Media("myMedia", "myPathName");

  m1->printMedia(std::cout);
  m2->printMedia(std::cout);

}
