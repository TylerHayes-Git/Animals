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
