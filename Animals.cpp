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
