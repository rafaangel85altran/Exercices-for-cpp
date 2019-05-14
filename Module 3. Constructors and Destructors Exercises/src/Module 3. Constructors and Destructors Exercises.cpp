//============================================================================
// Name        : .cpp
// Author      : jrangel
// Version     :
// Copyright   : Module 2. Class Member Functions Exercises
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * 1.  Create the ZooAnimal constructor function.  The function has 4
parameters -- a character string followed by three integer parameters.
In the constructor function dynamically allocate the name field (20
characters), copy the character string parameter into the name field,
and then assign the three integer parameters to cageNumber,
weightDate, and weight respectively.

   class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal (char*, int, int, int); // constructor function
      ~ZooAnimal (); // destructor function
      void changeWeight (int pounds);
      char* reptName ();
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };

 *
 * */

#include <iostream>
#include <string>
using namespace std;

class ZooAnimal {
    private:
      string name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal ();							//default constructor
      ZooAnimal (string, int, int, int); 	// constructor function
      //~ZooAnimal (); 						// destructor function
      void changeWeight (int pounds);
      char* reptName ();
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };


ZooAnimal::ZooAnimal (string a, int b, int c, int d) {
	name = a;
	cageNumber = b;
	weightDate = c;
	weight = d;
}

int main() {

	ZooAnimal cacate ("dffsfsd", 43, 54, 6);
	//ZooAnimal cacatue;

	return 0;
}
