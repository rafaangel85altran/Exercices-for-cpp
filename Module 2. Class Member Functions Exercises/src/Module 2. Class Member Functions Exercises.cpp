//============================================================================
// Name        : .cpp
// Author      : jrangel
// Version     :
// Copyright   : Module 2. Class Member Functions Exercises
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Write the ZooAnimal inline member function reptWeightDate.  It
should simply return the weightDate data member.

   enum scale {ounces, kilograms};

   class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate ();
      int daysSinceLastWeighed (int today);
   };
 * */

#include <iostream>
#include <string>
using namespace std;

enum scale {ounces, kilograms};

class ZooAnimal
{
 private:
   string name;
   int cageNumber;
   int weightDate;
   int weight;
 public:
   void Create (string, int, int, int); // create function
   void Destroy (); // destroy function
   void changeWeight (int pounds);
   void changeWeightDate (int today);
   char* reptName ();
   int reptWeight ();
   void reptWeight (scale which);
   inline int reptWeightDate ();
   int daysSinceLastWeighed (int today);
   int getweightDate();
};

int ZooAnimal::getweightDate () {return weightDate;}
void ZooAnimal::Create (string a, int b, int c, int d) { name = a; cageNumber = b; weightDate =c; weight = d;}
void ZooAnimal::changeWeight (int newWeight) {weight = newWeight;}
int ZooAnimal::reptWeight() {return weight;}
int ZooAnimal::reptWeightDate() {return weightDate;}

int main() {

	ZooAnimal crocodrile;
	crocodrile.Create("Johny", 23, 56, 75);
	crocodrile.changeWeight(85);
	cout << crocodrile.reptWeightDate() << " weight date" << endl;

	return 0;
}
