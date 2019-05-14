//============================================================================
// Name        : .cpp
// Author      : jrangel
// Version     :
// Copyright   : Module 2. Class Member Functions Exercises
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * EX1 Write the ZooAnimal inline member function reptWeightDate.  It
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

/*
 * EX2.  Modify the prototype for changeWeightDate below to make it the
appropriate single line inline member function changeWeightDate.  The
single line needed should set the data member weightDate equal to the
parameter today.

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
      inline void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      int reptWeightDate ();
      int daysSinceLastWeighed (int today);
   };
 *
 * EX3.  Write the ZooAnimal member function isMotherOf.  It needs only a
single statement that makes the mother data member of the ZooAnimal
object parameter a pointer to the ZooAnimal object for which this
function is called.

   class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function
      void isMotherOf (ZooAnimal&);
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate () {return weightDate;};
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
   ZooAnimal *mother;		//private member is a pointer aiming to the class ZooAnimal itself
 public:
   void Create (string, int, int, int); 	// create function
   void Destroy (); 						// destroy function
   void changeWeight (int pounds);
   inline void changeWeightDate (int today);
   string reptName ();
   int reptWeight ();
   void reptWeight (scale which);
   inline int reptWeightDate ();
   int daysSinceLastWeighed (int today);
   int getweightDate();
   void isMotherOf(ZooAnimal &offspring);
   string whosYourMom (ZooAnimal &Mom);
};

int ZooAnimal::getweightDate () {return weightDate;}
void ZooAnimal::Create (string a, int b, int c, int d) { name = a; cageNumber = b; weightDate =c; weight = d;}
void ZooAnimal::changeWeight (int newWeight) {weight = newWeight;}
int ZooAnimal::reptWeight() {return weight;}
string ZooAnimal::reptName() {return name;}
int ZooAnimal::reptWeightDate() {return weightDate;}							//EX1
inline void ZooAnimal::changeWeightDate (int today) {weightDate  = today;}		//EX2
void ZooAnimal::isMotherOf(ZooAnimal &offspring) {offspring.mother = this;}		//EX3	Function that receives the address of the offspring and equals the object mother of the object offspring to this own pointer
string ZooAnimal::whosYourMom (ZooAnimal &Mom) {
	return Mom.reptName();
}

int main() {

	ZooAnimal crocodrile1, crocodrile2;
	crocodrile1.Create("Johny", 23, 56, 75);
	crocodrile2.Create("Emily", 24, 160, 46);
	crocodrile2.isMotherOf(crocodrile1);
	cout << "The mom of " << crocodrile1.reptName() << " is " << crocodrile1.whosYourMom(crocodrile2) << endl;

	return 0;
}
