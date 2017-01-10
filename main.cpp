#include "Media.h"
#include "Video.h"
#include "Photo.h"
#include "Film.h"

using namespace std;

int main() {

  //Before step 4
  //Media * m1 = new Media();
  //Media * m2 = new Media("myMedia", "/my/Path/Name");

  //step 6
  unsigned int chapterCounter1 = 10;
  unsigned int * durationArray1 = new unsigned int [chapterCounter1];

  unsigned int count1 = 0;
  durationArray1[count1++] = 360;
  durationArray1[count1++] = 180;
  durationArray1[count1++] = 90;
  durationArray1[count1++] = 45;


  Video * v1 = new Video();
  Video * v2 = new Video("myVideo", "/my/Path/Name/to/Video", 360);
  Photo * p1 = new Photo();
  Photo * p2 = new Photo("myPhoto", "/my/Path/Name/to/Photo", 4.2, 4.2);

  //step 6
  Film * f1 = new Film();
  Film * f2 = new Film("myFilm", "/my/Path/Name/to/Film", 675, durationArray1, count1);
  unsigned int size = 0;
  const unsigned int * durationArray2 = f2->getDurationArray(size);

  //Before step 4
  //m1->print(std::cout);
  //m2->print(std::cout);
  v1->print(cout);
  v2->print(cout);
  p1->print(cout);
  p2->print(cout);
  v2->play();
  p2->play();

  //step 6
  f1->print(cout);
  f2->print(cout);

  //Step 5 : building an array of media
  Media ** medium = new Media * [8];
  unsigned int count = 0;
  medium[count++] = v1;
  medium[count++] = p1;
  medium[count++] = v2;
  medium[count++] = p2;

  //Looping to play every media in the array
  for (unsigned int index = 0; index < count; index++){
    medium[index]->play();
  }

  //Looping to print every chapter duration of the array contained in a film object
  for (unsigned int index = 0; index < size ; index++){
    cout << index << " chapter: " << durationArray2[index] << endl;
  }



}
