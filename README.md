# inf-224
I have been developing this software on my own computer running on the 16.04 Ubuntu distribution, using Atom as an IDE.

First lab session on Wednesday, the 13th December:
I started declaring private variables and public methods in the Media.h file.
I used inline definition for most methods but the printing method.
I used only one constructor, initiating the variables with default values as a way to call the said constructor with empty arguments.
I used the following standard library objects: <string> and <iostream> directly in the .h files.
I used $using namespace std;$ in the .cpp files.
I used the #ifndef #define #endif trick to get rid of duplicates.
I modified the PROG variable in the Makefile once and for all.
I modified the SOURCES variable accordingly for each run, using only the .cpp files.
I run the program by typing $make run in the directory used to develop.

In the 4th step, I chose to be consistent by splitting Video and Photo in two files each (.cpp and .h extensions).
