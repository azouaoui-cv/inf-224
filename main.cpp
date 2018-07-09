#include "Media.h"
#include "Video.h"
#include "Photo.h"
#include "Film.h"
#include "Group.h"
#include <iostream>

using namespace std;

int main() {

/*
  //Before step 4
  //Media * m1 = new Media();
  //Media * m2 = new Media("myMedia", "/my/Path/Name");


*/

/*

  Video * v1 = new Video();
  Video * v2 = new Video("myVideo", "/my/Path/Name/to/Video", 360);
  Photo * p1 = new Photo();
  Photo * p2 = new Photo("myPhoto", "/my/Path/Name/to/Photo", 4.2, 4.2);
/*

/*

  //Before step 4
  //m1->print(std::cout);
  //m2->print(std::cout);
  v1->print(cout);
  v2->print(cout);
  p1->print(cout);
  p2->print(cout);
  v2->play();
  p2->play();



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



  //step 6
  unsigned int * durationArray1 = new unsigned int [10];

  unsigned int count1 = 0;
  durationArray1[count1++] = 360;
  durationArray1[count1++] = 180;
  durationArray1[count1++] = 90;
  durationArray1[count1++] = 45;

  Film * f1 = new Film();
  Film * f2 = new Film("myFilm", "/my/Path/Name/to/Film", 675, durationArray1, count1);
  unsigned int size = 0;
  const unsigned int * durationArray2 = f2->getDurationArray(size);

  cout << "size: " << size << endl;

  //step 6
  f1->print(cout);
  f2->print(cout);


  //Looping to print every chapter duration of the array contained in a film object
  cout << "Testing looping in a duration array 1" << endl;

  for (unsigned int index = 0; index < size ; index++){
    cout << "chapter: " << index << " " << durationArray1[index] << endl;
  }

  cout << "counter: " << count1 << endl;

  durationArray1[count1++] = 20;

  cout << "counter: " << count1 << endl;

  cout << durationArray1[count1 - 1] << endl;

  //Testing the setDurationArray method


  cout << "Testing the setDurationArray method by printing the modified film object" << endl;

  f2->setDurationArray(durationArray1, count1);

  f2->print(cout);


  cout << "Testing retrieving the previously setted duration array to assign it to a new const duration array" << endl;

  unsigned int size1 = 0;
  const unsigned int * durationArray3 = f2->getDurationArray(size1);

  cout << "size: " << size1 << endl;




  //Looping to print every chapter duration of the array contained in a film object
  for (unsigned int index = 0; index < size1 ; index++){
    cout << index << " chapter: " << durationArray3[index] << endl;
  }

  f2->print(cout);

*/

  //Step 8

/*
  Group * g1 = new Group("my Group");
  g1->push_back(v1);
  g1->push_back(v2);
  g1->push_back(p1);

  g1->print(cout);

  delete g1;

  g1 = nullptr;

  cout << "Group deleted" << endl;

  p1->print(cout);
  v1->print(cout);
  v2->print(cout);
  //The objects still exist!

  cout << "Multiple group test" << endl;

  g1 = new Group("my Group");
  g1->push_back(v1);
  g1->push_back(v2);
  g1->push_back(p1);


  g1->print(cout);

  Group * g2 = new Group("my new Group");
  g2->push_back(v1);
  g2->push_back(v2);
  g2->push_back(p1);

  g2->print(cout);

  delete g2;

  g1->print(cout);

*/

  //step 9

  cout << "Shared pointers declaration" << endl;

  shared_ptr<Video> v1(new Video());
  shared_ptr<Video> v2(new Video("myVideo", "/my/Path/Name/to/Video", 360));
  shared_ptr<Photo> p1(new Photo());
  shared_ptr<Photo> p2(new Photo("myPhoto", "/my/Path/Name/to/Photo", 4.2, 4.2));

  cout << "Group creation and printing" << endl;

  Group * g1 = new Group("my Group");
  g1->push_back(v1);
  g1->push_back(v2);
  g1->push_back(p1);

  g1->print(cout);

  v1.reset();
  v2.reset();
  p1.reset();

  cout << "main: Photo popped" << endl;

  g1->pop_back();
  //cout << "printing p1" << endl;

  //p1->print(cout);

  cout << "Checking if the deleted video is still in the group" << endl;

  g1->print(cout);

}
