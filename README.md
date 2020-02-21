# Animals
A class assignment involving classes, inheritance, and virtual functions.

## Main File:

```C++
/* Main.cpp file by Tyler Hayes
 * Assignment_2.cpp
 */

#include "Animals.h"
#include <iostream>

int main(){
	
	TestAnimals ();
	
	return 0;
}
```

## Header File:

```C++
/* Header File Edited by Tyler Hayes
 * Animals.h
 */
 
#ifndef ANIMALS_H
#define ANIMALS_H

#include <string>
#include <iostream>//added in

class Animal {
	
	  public:
	  	Animal ( const std::string& name ) : fName ( name ) {}
	  	virtual void Speak () const = 0;
	  	
	  protected:
	  	std::string fName;
	  	
}; // class Animal

class Dog : public Animal {
	  public:
	  	Dog ( const std::string& name ) : Animal ( name ) {}
		virtual void Speak () const{
			std::cout << "Woof! My name is " << fName << ".\n";
		};
		
}; // class Dog

class Cat : public Animal {
	  public:
	  	Cat ( const std::string& name ) : Animal ( name ) {}
		virtual void Speak () const{
			std::cout << "Meow! My name is " << fName << ".\n";
		};
		
}; // class Cat

class Tiger : public Animal {
	  public:
	  	Tiger ( const std::string& name ) : Animal ( name ) {}
		virtual void Speak () const{
			std::cout << "Roar! My name is " << fName << ".\n";
		};
		
}; // class Tiger

void TestAnimals ();

#endif
```

## CPP File:

```C++
/* .cpp file by Tyler Hayes
 * Animals.cpp
 */
 
 #include "Animals.h"
 
 const std::size_t num = 5;
 Animal* animals[] = { 
 	 new Dog( "Rover" ), 
 	 new Cat( "Tabby" ), 
	 new Tiger( "Mike" ), 
	 new Cat( "Tabby Jr" ), 
	 new Dog( "Rover Jr" ) };
 
 void TestAnimals () {
 	
 	for ( int i = 0; i < sizeof ( animals ); i++ ){
 	
 	animals[ i ] -> Speak();
 	};
 }
```

## Output:

```
Woof! My name is Rover.
Meow! My name is Tabby.
Roar! My name is Mike.
Meow! My name is Tabby Jr.
Woof! My name is Rover Jr.
```
