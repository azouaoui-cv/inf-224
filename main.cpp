#include "Media.h"

int main() {
  Media * m1 = new Media();
  Media * m2 = new Media("myMedia", "/my/Path/Name");

  m1->printMedia(std::cout);
  m2->printMedia(std::cout);

}
