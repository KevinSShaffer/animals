
#include <iostream>
#include <fstream>
#include <string>
#include "dog.h"

std::string readCsvLine(std::string);

int main()
{
	std::string csvLine = readCsvLine("files\\Dog.csv");

	std::cout << csvLine << std::endl;

	std::cin >> csvLine;

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