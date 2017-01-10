# inf-224
I have been developing this software on my own computer running on the 16.04 Ubuntu distribution, using Atom as an IDE.

First lab session on Tuesday, the 13th December:
I started declaring private variables and public methods in the Media.h file.
I used inline definition for most methods but the printing method.
I used only one constructor, initiating the variables with default values as a way to call the said constructor with empty arguments.
I used the following standard library objects: <string> and <iostream> directly in the .h files.
I used $using namespace std;$ in the .cpp files.
I used the #ifndef #define #endif trick to get rid of duplicates.
I modified the PROG variable in the Makefile once and for all.
I modified the SOURCES variable accordingly for each run, using only the .cpp files.
I run the program by typing $make run in the directory used to develop.

Session on Tuesday, the 20th December:
In the 4th step, I chose to be consistent by splitting Video and Photo in two files each (.cpp and .h extensions).
The "play" method does not have any implementation in the Media class. It is indeed an abstract method.
In doing so, the Media class becomes abstract. I will not be able to instantiate any Media object.
I muss therefore get rid of the previous main.cpp version by commenting useless lines.


In the 5th step, I will be using polymorphism to play each media on an array of media objects (be it photos or videos).
To do so, I had to use the "virtual" keyword in the declaration of the functions that will be dynamically linked, namely print and play,
as it is done in Java by default.
The type of the array elements is Media. The array contains pointers to the objects I added to the array.
As a result, the method invoked is the method of the pointed object as in Java.

Note: En C++, on utilise des pointeurs pour le polymorphisme !

In the 6th step, I created two attributes in the Film class: an array of duration and a chapter counter.
I built a constructor using default values and taking in parameters a constant table to affect it to the object duration array.
I then copied the table element by element.
I built a destructor and added a delete [] instruction to delete the duration array when the delete function is being called onto the object.
To set the duration array, I did the same as in the constructor, not forgetting to delete the duration array beforehand.
To retrieve the duration array, I declared the returned int pointer to be const as well as the object being left untouched to make sure encapsulation was done right. I included an integer parameter to be called by reference to get both the array and the chapter counter when calling getDurationArray.
Lastly, I redefined the printing method to print the duration of each chapter in addition to the traditionnal printing of the Video object.
