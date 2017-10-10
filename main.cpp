
#include <iostream>
#include <fstream>
#include <string>
#include "str_func.h"
#include "dog.h"
#include "fish.h"
#include "horse.h"
#include "lizard.h"
#include "monkey.h"

int main()
{
	Dog dog("files\\Dog.csv");
	std::cout << dog.toString() << std::endl;

	Fish fish("files\\Fish.csv");
	std::cout << fish.toString() << std::endl;

	Horse horse("files\\Horse.csv");
	std::cout << horse.toString() << std::endl;

	Lizard lizard("files\\Lizard.csv");
	std::cout << lizard.toString() << std::endl;

	Monkey monkey("files\\Monkey.csv");
	std::cout << monkey.toString() << std::endl;

	std::cout << "Press ctrl + z (ctrl + d) to quit." << std::endl;
	while (std::cin) { }

	return 0;
}