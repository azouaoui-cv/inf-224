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

In the 7th step, I have to handle dynamic memory. In the classes I created, only Film could be a threat when it comes to memory leak.
This is the reason why I made sure I deleted the duration array upon the call of the destructor of Film. The destructor is being called before the actual deleting a Film object.
Copying objects could be a threat too: Imagine I were to copy the duration array into a whole new array each time I called the getDurationArray method,
the developer would not know this but this could lead to a memory leak.
On the other hand, I need to make sure I delete the previous duration array when I call the setDurationArray method and build a new one based on the array given in the parameters.

8th step:
I defined a new type "MediaList" using typedef that is a list of Media objects. The Group class then heritates the MediaList type.
I built a constructor to define the name of the group.
I implemented the print method by using now standard c++11 syntax when it comes to iterators.
At first I omitted the * before "this" but it is necessary to get to the list-like object and then iterating on its elements.
In the main, I made sure to test whether the objects contained in the group were deleted or not when deleting the group object.
I left the destructor blank but it is calling the linked destructors "above" it.
