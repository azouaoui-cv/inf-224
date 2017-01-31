#include "Film.h"
#include <iostream>

using namespace std;

void Film::print(ostream & s) const {
  unsigned int size = 0;
  const unsigned int * tmp = getDurationArray(size);
  this->Video::print(s);
  s << "This file has: " << size << " chapters." << endl;
  for (unsigned int index = 0; index < size; index++){
    s << "Chapter " << index << " is " << tmp[index] << " minutes long." <<endl;
  }

}
