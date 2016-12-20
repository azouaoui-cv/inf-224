#include "Media.h"
#include "Video.h"
#include "Photo.h"

using namespace std;

int main() {

  //Before step 4
  //Media * m1 = new Media();
  //Media * m2 = new Media("myMedia", "/my/Path/Name");

  Video * v1 = new Video();
  Video * v2 = new Video("myVideo", "/my/Path/Name/to/Video", 360);
  Photo * p1 = new Photo();
  Photo * p2 = new Photo("myPhoto", "/my/Path/Name/to/Photo", 4.2, 4.2);

  //Before step 4
  //m1->print(std::cout);
  //m2->print(std::cout);
  v1->print(cout);
  v2->print(cout);
  p1->print(cout);
  p2->print(cout);
  v2->play();
  p2->play();

}
