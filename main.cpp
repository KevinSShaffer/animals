
#include <iostream>
#include <fstream>
#include <string>
#include "str_func.h"
#include "dog.h"
#include "fish.h"

std::string readCsvLine(std::string);

int main()
{
	Dog dog = Dog::Create(readCsvLine("files\\Dog.csv"));
	std::cout << dog.toString() << std::endl;

	Fish fish = Fish::Create(readCsvLine("files\\Fish.csv"));
	std::cout << fish.toString() << std::endl;

	std::cout << "Press ctrl + z (ctrl + d) to quit." << std::endl;
	while (std::cin) { }

	return 0;
}

std::string readCsvLine(std::string filePath)
{
	std::string line;
	std::ifstream fs;
	fs.open(filePath.c_str());

	if (!std::getline(fs, line))
		throw "Unable to read file.";
	else
		return line;
}