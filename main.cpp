
#include <iostream>
#include <fstream>
#include <string>
#include "str_func.h"
#include "dog.h"

std::string readCsvLine(std::string);

int main()
{
	std::string csvLine = readCsvLine("files\\Dog.csv");

	Dog dog = Dog::Create(csvLine);

	std::cout << "Name: " << dog.GetName() << std::endl;
	std::cout << "Breed: " << dog.GetBreed() << std::endl;
	std::cout << "Age: " << dog.GetAge() << std::endl;	
	std::cout << "Color: " << dog.GetColor() << std::endl;
	std::cout << "Weight: " << dog.GetWeight() << std::endl;

	std::cout << "Press ctrl + z (ctrl + d) to quit." << std::endl;
	while (std::cin)
	{
	}

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