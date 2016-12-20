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
