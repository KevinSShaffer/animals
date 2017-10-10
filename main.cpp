
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include "str_func.h"
#include "dog.h"
#include "fish.h"
#include "horse.h"
#include "lizard.h"
#include "monkey.h"
#include "exceptions.h"

// template should only be used with types of Animal
// NOT TYPE SAFE!!!
template<class A>
void createAndOutputAnimal(std::string);

int main()
{
	createAndOutputAnimal<Dog>("files/Dog.csv");
	createAndOutputAnimal<Fish>("files/Fish.csv");
	createAndOutputAnimal<Horse>("files/Horse.csv");
	createAndOutputAnimal<Lizard>("files/Lizard.csv");
	createAndOutputAnimal<Monkey>("files/Monkey.csv");

	std::cout << "Press ctrl + z (ctrl + d) to quit." << std::endl;
	while (std::cin) { }

	return 0;
}

// template should only be used with types of Animal
// NOT TYPE SAFE!!!
template<class A>
void createAndOutputAnimal(std::string filePath)
{
	try
	{
		A a(filePath);
		std::cout << a.toString() << std::endl;	
	}
	catch (UnableToReadFile)
	{
		std::cout << "Problem reading: " << filePath << std::endl;
	}
	catch (UnableToInitialize e)
	{
		std::cout << "Problem initializing file: '" << filePath 
			<< "' with csv line of: '" << e.GetCsvLine() 
			<< "'" << std::endl;	
	}	
}